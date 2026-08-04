#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(a == b || b == c || c == a)
        {
            cout << 0 << endl;
        }
        else
        {
            int minnum = min({a, b, c}), maxnum = max({a, b, c});
            int middle = a + b + c - minnum - maxnum;
            int result = INT_MAX;
            if((maxnum - minnum) % 2 == 0)
            {
                result = (maxnum - minnum) / 2;
            }
            result = min({result, maxnum - middle, middle - minnum});
            cout << result << endl;
        }
    }
}