#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n;
        cin >> n;
        vector<int> A(n);
        for(int i=0 ; i<n; i++)
        {
            cin >> A[i];
        }

        int minnum = INT_MAX;
        for(int i=0; i<n-1; i++)
        {
            minnum = min(minnum, max(A[i], A[i+1]));
        }
        cout << minnum-1 << endl;
    }
}