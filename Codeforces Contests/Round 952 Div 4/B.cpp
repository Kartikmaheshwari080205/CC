#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n;
        cin >> n;
        int maxnum = 0;
        int prevmaxsum = 0;
        for(int i=2; i<=n; i++)
        {
            int sum = (n/i) * (i + (n/i) * i) / 2;
            if(sum > prevmaxsum)
            {
                maxnum = i;
                prevmaxsum = sum;
            }
        }
        cout << maxnum << endl;
    }
}