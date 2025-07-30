#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        long long a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;
        if((b1-a1) * (a2-b2) > 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}