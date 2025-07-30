#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n;
        cin >> n;
        if(n >= 102 && n <= 109)
        {
            cout << "YES" << endl;
        }
        else if(n >= 1010 && n <= 1099)
        {
            cout << "YES" << endl;
        }
        else if(n >= 10100 && n <= 10999)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}