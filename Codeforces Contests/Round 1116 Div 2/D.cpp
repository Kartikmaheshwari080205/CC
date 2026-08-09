#include<bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

long long ModPower(long long a, long long b)
{
    long long result = 1;
    while(b)
    {
        if(b & 1)
        {
            result = (result * a) % MOD;
        }
        a = (a * a) % MOD;
        b >>= 1;
    }
    return result;
}

long long Combinations(int n, int r)
{
    if(r < 0 || r > n)
    {
        return 0;
    }
    long long numerator = 1, denominator = 1;
    r = min(r, n - r);
    for(int i=r+1; i<=n; i++)
    {
        numerator = (numerator * i) % MOD;
        denominator = (denominator * (i - r)) % MOD;
    }
    return (numerator * ModPower(denominator, MOD - 2)) % MOD;
}

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int zeroes = 0, ones = 0, changes = 0;
        for(int i=0; i<n; i++)
        {
            s[i] == '0' ? zeroes++ : ones++;
            if(i > 0 && s[i] != s[i-1])
            {
                changes++;
            }
        }
        if(zeroes == 0 || ones == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            int run0 = changes + 1, run1 = changes + 1;
            if(s[0] == '0')
            {
                run0 = (run0 + 1) / 2;
                run1 = run1 / 2;
            }
            else
            {
                run0 = run0 / 2;
                run1 = (run1 + 1) / 2;
            }
            cout << (Combinations(zeroes - 1, run0 - 1) * Combinations(ones - 1, run1 - 1) % MOD) << endl;
        }
    }
}