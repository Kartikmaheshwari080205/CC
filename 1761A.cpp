#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if(n == 0)
        {
            cout << "NO" << endl;
        }
        else if(n == a && a == b)
        {
            cout << "YES" << endl;
        }
        else if(a == 0 || b == 0)
        {
            cout << "YES" << endl;
        }
        else if(n - (a+b) >= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}