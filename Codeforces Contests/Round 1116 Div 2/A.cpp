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
        int maxnum = max({a, b, c}), minnum = min({a, b, c});
        int middle = a + b + c - maxnum - minnum;
        cout << min(maxnum - minnum, middle) << endl;
    }
}