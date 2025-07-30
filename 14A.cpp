#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> A(n, vector<char> (m));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> A[i][j];
        }
    }

    int left = m, right = 0, top = n, bottom = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(A[i][j] == '*')
            {
                if(j < left)
                {
                    left = j;
                }
                if(j > right)
                {
                    right = j;
                }
                if(i < top)
                {
                    top = i;
                }
                if(i > bottom)
                {
                    bottom = i;
                }
            }
        }
    }
    for(int i = top; i <= bottom; i++)
    {
        for(int j = left; j <= right; j++)
        {
            cout << A[i][j];
        }
        cout << endl;
    }
}