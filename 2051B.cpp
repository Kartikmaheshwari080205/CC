#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int days = 3 * (n / (a + b + c));
        n %= (a + b + c);
        if(n == 0)
        {
            cout << days << endl;
        }
        else if(n <= a)
        {
            cout << days + 1 << endl;
        }
        else if(n <= a + b)
        {
            cout << days + 2 << endl;
        }
        else if(n <= a + b + c)
        {
            cout << days + 3 << endl;
        }
    }
}