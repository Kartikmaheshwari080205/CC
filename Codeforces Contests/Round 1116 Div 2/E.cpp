#include<bits/stdc++.h>
using namespace std;

long long ExtendedGCD(long long a, long long b, long long& x, long long& y)
{
    if(b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    long long x1, y1;
    long long g = ExtendedGCD(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

long long ModInverse(long long a, long long mod)
{
    long long x, y;
    ExtendedGCD(a, mod, x, y);
    x = (x + mod) % mod;
    return x;
}

int main()
{
    string turn;
    cin >> turn;
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n, r, c;
        cin >> n;
        vector<string> A(n);
        long long w = 0, sumr = 0, sumc = 0;
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
            for(int j=0; j<n; j++)
            {
                if(A[i][j] == '#')
                {
                    w++;
                    sumr = (sumr + i) % n;
                    sumc = (sumc + j) % n;
                }
            }
        }
        if(turn == "first")
        {
            cin >> r >> c;
            r--;
            c--;
            long long dr = (w * r - sumr + n) % n, dc = (w * c - sumc + n) % n;
            if(dr == 0 && dc == 0)
            {
                cout << "1 1 1 1" << endl;
            }
            else
            {
                for(int i=0; i<n; i++)
                {
                    for(int j=0; j<n; j++)
                    {
                        if(A[i][j] == '#')
                        {
                            int nr = (i + dr) % n, nc = (j + dc) % n;
                            if(A[nr][nc] == '.')
                            {
                                cout << i + 1 << " " << j + 1 << " " << nr + 1 << " " << nc + 1 << endl;
                                goto NEXT;
                            }
                        }
                    }
                }
            }
        }
        else
        {
            long long invw = ModInverse(w % n, n);
            long long xr = (sumr * invw) % n, xc = (sumc * invw) % n;
            cout << xr + 1 << " " << xc + 1 << endl;
        }
        NEXT:;
    }
}