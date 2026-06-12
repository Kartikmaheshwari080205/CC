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
        int minnum = INT_MAX, maxnum = INT_MIN;
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
            minnum = min(minnum, A[i]);
            maxnum = max(maxnum, A[i]);
        }
        cout << maxnum - minnum + 1<< endl;
    }
}