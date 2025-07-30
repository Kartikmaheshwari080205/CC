#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        int l1 = max(l, 0 - m);
        int r1 = l1 + m;
        cout << l1 << " " << r1 << endl;
    }
}