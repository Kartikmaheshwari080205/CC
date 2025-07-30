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
        long long result = 0, a = 1, b = 0;
        while(n >= k)
        {
            if(n % 2 == 0)
            {
                n /= 2;
                b = 2 * b + a * n;
                a *= 2;
            }
            else
            {
                result += (n + 1) / 2 * a + b;
                n /= 2;
                b = 2 * b + a * (n + 1);
                a *= 2;
            }
        }
        cout << result << endl;
    }
}