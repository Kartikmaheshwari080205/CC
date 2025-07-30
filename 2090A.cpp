#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int x, y, a;
        cin >> x >> y >> a;
        int full = a / (x + y);
        int rem = a - full * (x + y);
        if(rem < x)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}