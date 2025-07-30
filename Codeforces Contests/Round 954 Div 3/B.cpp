#include<bits/stdc++.h>
using namespace std;

bool GreatestElement(int i, int j, vector<vector<int>>& A)
{
    return (A[i][j] > A[i-1][j] && A[i][j] > A[i][j-1] && A[i][j] > A[i+1][j] && A[i][j] > A[i][j+1]);
}

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> A(n+2, vector<int> (m+2, 0));
        for(int i=1; i<n+1; i++)
        {
            for(int j=1; j<m+1; j++)
            {
                cin >> A[i][j];
            }
        }

        for(int i=1; i<n+1; i++)
        {
            for(int j=1; j<m+1; j++)
            {
                if(GreatestElement(i, j, A))
                {
                    int maxnum = 0;
                    if(A[i-1][j] != 0)
                    {
                        maxnum = max(maxnum, A[i-1][j]);
                    }
                    if(A[i][j-1] != 0)
                    {
                        maxnum = max(maxnum, A[i][j-1]);
                    }
                    if(A[i+1][j] != 0)
                    {
                        maxnum = max(maxnum, A[i+1][j]);
                    }
                    if(A[i][j+1] != 0)
                    {
                        maxnum = max(maxnum, A[i][j+1]);
                    }
                    A[i][j] = maxnum;
                }
            }
        }
        for(int i=1; i<n+1; i++)
        {
            for(int j=1; j<m+1; j++)
            {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
}