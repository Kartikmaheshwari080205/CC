#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int k, x;
        cin >> k >> x;
        while(k--)
        {
            x *= 2;
        }
        cout << x << endl;
    }
}