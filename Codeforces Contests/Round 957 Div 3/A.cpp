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

        int maxProd = 0;
        for(int i=0; i<=5; i++)
        {
            for(int j=0; j<=5-i; j++)
            {
                maxProd = max(maxProd, ((a+i) * (b+j) * (c+5-i-j)));
            }
        }
        cout << maxProd << endl;
    }
}