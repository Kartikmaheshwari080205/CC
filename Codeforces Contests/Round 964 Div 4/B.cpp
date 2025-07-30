#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int count = 0;
        int suneet = (a1 > b1) + (a2 > b2);
        int slavic = (a1 < b1) + (a2 < b2);
        if(suneet > slavic)
        {
            count++;
        }
        suneet = (a1 > b2) + (a2 > b1);
        slavic = (a1 < b2) + (a2 < b1);
        if(suneet > slavic)
        {
            count++;
        }
        suneet = (a2 > b1) + (a1 > b2);
        slavic = (a2 < b1) + (a1 < b2);
        if(suneet > slavic)
        {
            count++;
        }
        suneet = (a2 > b2) + (a1 > b1);
        slavic = (a2 < b2) + (a1 < b1);
        if(suneet > slavic)
        {
            count++;
        }
        cout << count << endl;
    }
}
