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
        int time = 0;
        if(x >= y)
        {
            time = x;
        }
        else
        {
            if(x+k <= y)
            {
                time = y + y - (x+k);
            }
            else
            {
                time = y;
            }
        }
        cout << time << endl;
    }
}