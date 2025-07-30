#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n, k;
        cin >> n >> k;
        int A = 2023;
        for(int i=0; i<n; i++)
        {
            int b;
            cin >> b;
            if(A % b == 0)
            {
                A /= b;
            }
            else
            {
                A = 0;
            }
        }
        if(A)
        {
            cout << "YES" << endl;
            cout << A << endl;
            for(int i=0; i<k-1; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}