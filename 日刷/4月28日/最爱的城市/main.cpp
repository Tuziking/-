#include <bits/stdc++.h>
using namespace std;


void Floyed(vector<vector<int>> &graph, int n){
    for (size_t i = 1; i <= n+1; i++)
    {
        for (size_t j = 1; j < n+1; j++)
        {
            int min_dist = graph[i][j];
            for (size_t k = 1; k < n+1; k++)
            {
                if(graph[i][k] + graph[k][j] < min_dist){
                    min_dist = graph[i][k] + graph[k][j];
                }
            }
        }

    }


}


int main(int argc, char const *argv[])
{
    int n, m;
    while (cin >> n >> m)
    {
        int c1, c2, dist;
        int max_dist = 21 * m;
        vector<vector<int>> graph(n+1, vector<int>(n+1, max_dist));
        for (size_t i = 0; i < m; i++)
        {
            cin >> c1 >> c2 >> dist;
            graph[c1][c2] = dist;
            graph[c2][c1] = dist;
        }
        Floyed(graph, n);
        cin >> c1 >> c2;
        cout << graph[c1][c2] << endl;
    }

    return 0;
}
