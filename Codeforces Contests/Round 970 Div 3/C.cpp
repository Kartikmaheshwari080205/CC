#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int l, r;
        cin >> l >> r;

        long long k = 1;
        while(k * (k-1) / 2 <= r - l)
        {
            k++;
        }
        cout << k-1 << endl;
    }
}