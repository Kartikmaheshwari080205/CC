#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int l, r;
        cin >> l >> r;
        cout << (r - l + (r < 2)) << endl;
    }
}