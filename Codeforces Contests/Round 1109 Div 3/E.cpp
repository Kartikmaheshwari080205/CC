#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        vector<int> prefix(n, 0);
        for(int i=1; i<n; i++)
        {
            prefix[i] = prefix[i-1] + (s[i-1] == s[i] ? 1 : 0);
        }
        for(int i=0; i<q; i++)
        {
            int l, r, k;
            cin >> l >> r >> k;
            long long m = 0;
            if(l < r)
            {
                m = prefix[r-1] - prefix[l-1];
            }
            if(m <= 2LL * k)
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