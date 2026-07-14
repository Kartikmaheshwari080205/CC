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
        vector<int> A(n + 1), B(m), can(n + 1, 0);
        for(int i=1; i<=n; i++)
        {
            cin >> A[i];
        }
        for(int i=0; i<m; i++)
        {
            cin >> B[i];
            can[B[i]] = 1;
        }
        vector<long long> dp = {0, 0};
        for(int i=1; i<=n; i++)
        {
            vector<long long> ndp = {LLONG_MIN, LLONG_MIN};
            for(int p=0; p<2; p++)
            {
                if(dp[p] == LLONG_MIN)
                {
                    continue;
                }
                long long val = (p == 0 ? A[i] : -A[i]);
                ndp[p] = max(ndp[p], dp[p] + val);
                if(can[i])
                {
                    ndp[p ^ 1] = max(ndp[p ^ 1], dp[p] + val);
                }
            }
            dp.swap(ndp);
        }
        cout << dp[0] << endl;
    }
}