#include<bits/stdc++.h>
using namespace std;

bool isBeautiful(int n, vector<vector<int>>& A)
{
    for(int i=0; i<n; i++)
    {
        if(A[0][i] != 1)
        {
            return false;
        }
        if(A[n-1][i] != 1)
        {
            return false;
        }
        if(A[i][0] != 1)
        {
            return false;
        }
        if(A[i][n-1] != 1)
        {
            return false;
        }
    }
    for(int i=1; i<n-1; i++)
    {
        for(int j=1; j<n-1; j++)
        {
            if(A[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int N;
        cin >> N;
        string s;
        cin >> s;

        int n = sqrt(N);
        if(n * n != N)
        {
            cout << "NO" << endl;
        }
        else
        {
            vector<vector<int>> A(n, vector<int>(n));
            int k=0;
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    A[i][j] = s[k++] - '0';
                }
            }
            if(isBeautiful(n, A))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}