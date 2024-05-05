#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> result(n, vector<int>(n, 0));
    int count = 0;
    int num = 1;
    for (size_t i = n - 1; i >= 1; i-=2)
    {
        for (size_t j = 0; j < 4; j++)
        {
            if(j == 0){
                for (size_t k = 0; k < i; k++)
                {
                    if(result[count][k+count] == 0){
                        result[count][k+count] = num;
                        // cout << num;
                        num++;
                    }
                }
            }
            if(j == 1){
                for (size_t k = 0; k < i; k++)
                {
                    if(result[k+count][n-1-count] == 0){
                        result[k+count][n-1-count] = num;
                        // cout << num;
                        num++;
                    }
                }
            }
            if(j == 2){
                for (size_t k = i; k >= 0; k--)
                {
                    if(result[n-1-count][k+count] == 0){
                        result[n-1-count][k+count] = num;
                        // cout << num;
                        num++;
                    }
                }
            }
            if(j == 3){
                for (size_t k = i; k >= 0; k--)
                {
                    if(result[k+count][count] == 0){
                        result[k+count][count] = num;
                        // cout << num;
                        num++;
                    }
                }
            }
        
        }
        count++;
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<vector<int>> result = generateMatrix(n);
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; i < n; j++)
        {
            cout<< result[i][j] << " ";
        }
        cout << endl;
        
    }
    
    

    return 0;
}
