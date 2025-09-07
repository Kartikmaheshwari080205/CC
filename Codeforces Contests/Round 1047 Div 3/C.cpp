#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        long long a, b;
        cin >> a >> b;
        long long result = -1;
        for(long long i=1; i*i<=b; i++)
        {
            if(b % i == 0)
            {
                long long d1 = i, d2 = b / i;
                long long sum1 = a * d1 + b / d1;
                if(sum1 % 2 == 0)
                {
                    result = max(result, sum1);
                }
                if(d1 != d2)
                {
                    long long sum2 = a * d2 + b / d2;
                    if(sum2 % 2 == 0)
                    {
                        result = max(result, sum2);
                    }
                }
            }
        }
        cout << result << endl;
    }
}