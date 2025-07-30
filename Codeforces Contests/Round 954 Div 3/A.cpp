#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;

        int minx = min(x1, min(x2, x3));
        int maxx = max(x1, max(x2, x3));
        int fmin = INT_MAX, f;
        for(int i = minx; i <= maxx; i++)
        {
            f = abs(i-x1) + abs(i-x2) + abs(i-x3);
            fmin = min(fmin, f);
        }
        fmin = min(fmin, f);
        cout << fmin << endl;
    }
}