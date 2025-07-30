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
        if(a > b)
        {
            cout << b << " " << a << endl;
        }
        else
        {
            cout << a << " " << b << endl;
        }
    }
}