#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int a, b;
        cin >> a >> b;
        long long result = lcm(a, b);
        if(b % a == 0)
        {
            result = b * (b / a);
        }
        cout << result << endl;
    }
}