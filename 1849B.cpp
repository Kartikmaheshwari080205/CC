#include<bits/stdc++.h>
using namespace std;

bool Compare(vector<int>& a, vector<int>& b)
{
    if(a[0] != b[0])
    {
        return a[0] > b[0];
    }
    else
    {
        return a[1] < b[1];
    }
}

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> A(n, vector<int> (2));
        for(int i=0; i<n; i++)
        {
            cin >> A[i][0];
            if(A[i][0] % k != 0)
            {
                A[i][0] %= k;
            }
            else
            {
                A[i][0] = k;
            }
            A[i][1] = i+1;
        }

        sort(A.begin(), A.end(), Compare);
        for(int i=0; i<n; i++)
        {
            cout << A[i][1] << " ";
        }
        cout << endl;
    }
}