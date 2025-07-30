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
        vector<int> A(m);
        for(int i=0; i<m; i++)
        {
            cin >> A[i];
        }
        unordered_set<int> Q;
        int q;
        for(int i=0; i<k; i++)
        {
            cin >> q;
            Q.insert(q);
        }

        if(k >= n)
        {
            string s(m, '1');
            cout << s << endl;
        }
        else if(k <= n - 2)
        {
            string s(m, '0');
            cout << s << endl;
        }
        else
        {
            string s(m, '0');
            int missing;
            for(int i=1; i<=n; i++)
            {
                if(Q.find(i) == Q.end())
                {
                    missing = i;
                    break;
                }
            }
            for(int i=0; i<m; i++)
            {
                if(A[i] == missing)
                {
                    s[i] = '1';
                }
            }
            cout << s << endl;
        }
    }
}