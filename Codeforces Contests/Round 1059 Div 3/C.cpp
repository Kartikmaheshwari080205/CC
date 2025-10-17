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

        if(a == b)
        {
            cout << 0 << endl;
        }
        else if((a ^ b) <= a)
        {
            cout << 1 << endl << (a ^ b) << endl;
        }
        else
        {
            int x = a | b;
            int x1 = a ^ x;
            int x2 = x ^ b;
            if(x1 <= a && x2 <= x)
            {
                cout << 2 << endl << x1 << " " << x2 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
}