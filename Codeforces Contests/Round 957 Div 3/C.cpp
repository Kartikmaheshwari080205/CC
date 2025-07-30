#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> A(n);
        int small = m, big = n;
        for(int i=n-1; small > 0; i--)
        {
            A[i] = small--;
        }
        for(int i=0; big > m; i++)
        {
            A[i] = big--;
        }
        for(int i=0; i<n; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
}