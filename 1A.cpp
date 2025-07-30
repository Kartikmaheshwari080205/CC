#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;

    long long flagstoneLength, flagstoneWidth;
    if(n%a == 0)
    {
        flagstoneLength = n/a;
    }
    else
    {
        flagstoneLength = n/a + 1;
    }
    if(m%a == 0)
    {
        flagstoneWidth = m/a;
    }
    else
    {
        flagstoneWidth = m/a + 1;
    }
    cout << flagstoneLength*flagstoneWidth;
}