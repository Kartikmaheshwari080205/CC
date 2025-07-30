#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int row1 = m, row2 = m;
        int count = min(row1, a);
        row1 -= count;
        count += min(row2, b);
        row2 -= min(row2, b);
        int remainingSeats = row1 + row2;
        count += min(c, remainingSeats);
        cout << count << endl;
    }
}