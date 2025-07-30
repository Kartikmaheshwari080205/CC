#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> A(n, vector<int>(3));
    for(int i=0; i<n; i++)
    {
        cin >> A[i][0] >> A[i][1] >> A[i][2];
    }

    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(A[i][0] + A[i][1] + A[i][2] >= 2)
        {
            count++;
        }
    }
    cout << count;
}