#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, a, b;
    cin >> n >> m >> a >> b;

    long long rem = n % m;
    if(rem == 0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << min(rem * b, (m - rem) * a) << endl;
    }
}