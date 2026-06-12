#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> parity(k, 0);
        for(int i=0; i<n; i++)
        {
            parity[i % k] ^= (s[i] - '0');
        }
        bool flag = true;
        for(int p : parity)
        {
            if(p)
            {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
}