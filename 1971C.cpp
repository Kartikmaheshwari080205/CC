#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;

        if(a1 > b1)
        {
            swap(a1, b1);
        }
        if(a2 > b2)
        {
            swap(a2, b2);
        }
        if((a2 > a1 && a2 < b1) && (b2 > a1 && b2 < b1))
        {
            cout << "NO" << endl;
        }
        else if(!(a2 > a1 && a2 < b1) && !(b2 > a1 && b2 < b1))
        {
            cout << "NO" <<endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}