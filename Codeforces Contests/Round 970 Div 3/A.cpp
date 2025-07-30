#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int a, b;
        cin >> a >> b;

        if(a % 2 == 0 && b % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else if(a % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else if(a % 2 == 0 && a > 0 && b % 2 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}