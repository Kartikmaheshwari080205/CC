#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> A(n, vector<int>(2));
    for(int i=0; i<n; i++)
    {
        cin >> A[i][0] >> A[i][1];
    }

    int count = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i != j)
            {
                if(A[i][0] == A[j][1])
                {
                    count++;
                }
            }
        }
    }
    cout << count;
}