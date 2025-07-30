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

        int sum = 0;
        if(n < k)
        {
            sum = n * (n + 1) / 2;
        }
        else
        {
            sum = k * (2 * n - k + 1) / 2;
        }
        if(sum % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}