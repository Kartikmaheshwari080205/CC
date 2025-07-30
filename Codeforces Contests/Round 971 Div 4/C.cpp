#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int x, y, k;
        cin >> x >> y >> k;

        int movex = (x + k - 1) / k, movey = (y + k - 1) / k;
        int total = 0;
        if(movex > movey)
        {
            total = 2 * movex - 1;
        }
        else
        {
            total = 2 * movey;
        }
        cout << total << endl;
    }
}