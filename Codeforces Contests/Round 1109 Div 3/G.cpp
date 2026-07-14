#include<bits/stdc++.h>
using namespace std;

class FenwickTree {
public:
    int n;
    vector<long long> bit;

    FenwickTree(int n) : n(n)
    {
        bit.assign(n+1, 0);
    }

    void update(int index, long long value)
    {
        while(index <= n)
        {
            bit[index] = max(bit[index], value);
            index += index & -index;
        }
    }

    long long query(int index)
    {
        long long result = 0;
        while(index > 0)
        {
            result = max(result, bit[index]);
            index -= index & -index;
        }
        return result;
    }
};

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n;
        cin >> n;
        vector<int> A(n+1);
        for(int i=1; i<=n; i++)
        {
            cin >> A[i];
        }
        vector<vector<pair<int, long long>>> events(n+2);
        FenwickTree ft(n);
        vector<long long> dp(n+1, 0);
        long long result = 0;
        for(int i=1; i<=n; i++)
        {
            for(auto& event : events[i])
            {
                ft.update(event.first, event.second);
            }
            long long best = 0, limit = i - A[i] - 1;
            if(limit >= 1)
            {
                best = ft.query((int)limit);
            }
            dp[i] = best + A[i];
            result = max(result, dp[i]);
            long long next = i + A[i] + 1;
            if(next <= n)
            {
                events[(int)next].push_back({i, dp[i]});
            }
        }
        cout << result << endl;
    }
}