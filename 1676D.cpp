#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> A(n, vector<int> (m));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin >> A[i][j];
            }
        }

        int maxsum = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int sum = A[i][j];
                for(int k=1; i-k >= 0 && j-k >= 0; k++)
                {
                    sum += A[i-k][j-k];
                }
                for(int k=1; i+k < n && j+k < m; k++)
                {
                    sum += A[i+k][j+k];
                }
                for(int k=1; i-k >= 0 && j+k < m; k++)
                {
                    sum += A[i-k][j+k];
                }
                for(int k=1; i+k < n && j-k >= 0; k++)
                {
                    sum += A[i+k][j-k];
                }
                maxsum = max(maxsum, sum);
            }
        }
        cout << maxsum << endl;
    }
}