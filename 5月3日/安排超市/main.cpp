#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<char>> marks;
vector<vector<char>> myMap;
vector<vector<int>> operations = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};


void dfs(int x, int y , vector<pair<int, int>>& points){
    if(x < 0 || x >= n || y < 0 || y >= n || marks[x][y] == '*'){
        return;
    }
    points.push_back(make_pair(x,y));
    marks[x][y] = '*';
    for (size_t i = 0; i < operations.size(); i++)
    {
        dfs(x + operations[i][0], y + operations[i][1], points);
    }
}

int main(int argc, char const *argv[])
{

    cin >> n;
    marks.resize(n, vector<char>(n, 0));
    myMap.resize(n, vector<char>(n, 0));

    // 初始化地图
    for (size_t i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (size_t j = 0; j < s.size(); j++)
        {
            marks[i][j] = s[j];
            myMap[i][j] = s[j];
        }
    }

    int markets = 0;
    int min_dis = 0;
    // 遍历地图
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if(marks[i][j] == '#'){
                markets++;
                vector<pair<int, int>> points;
                dfs(i, j, points);

                int min_step = INT_MAX;
                for (auto point : points)
                {
                    vector<vector<bool>> visited = vector<vector<bool>>(n, vector<bool>(n, false));
                    queue<pair<int, int>> q;
                    q.push({point.first, point.second});
                    visited[point.first][point.second] = true;
                    int steps = 0;
                    int dist = 0;
                    while (!q.empty())
                    {
                        int size = q.size();
                        for (size_t k = 0; k < size; k++)
                        {
                            auto cur = q.front();
                            q.pop();
                            if(myMap[cur.first][cur.second] == '#'){
                                dist += steps;
                            }
                            for (size_t l = 0; l < operations.size(); l++)
                            {
                                int x = cur.first + operations[l][0];
                                int y = cur.second + operations[l][1];
                                if(x < 0 || x >= n || y < 0 || y >= n || visited[x][y] || myMap[x][y] == '*'){
                                    continue;
                                }
                                visited[x][y] = true;
                                q.push({x, y});
                            }

                        }
                        steps++;
                    }
                    min_step = min(min_step, dist);
                }
                min_dis += min_step;
            }
        }
    }
    cout << markets << " " << min_dis << endl;
    return 0;
}
