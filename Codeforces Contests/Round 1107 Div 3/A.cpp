#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int x, y;
        cin >> x >> y;
        if(x % y == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}