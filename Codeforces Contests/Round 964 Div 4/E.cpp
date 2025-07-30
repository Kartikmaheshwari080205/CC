#include<bits/stdc++.h>
using namespace std;

int Count(int n)
{
    int count = 0;
    while(n > 0)
    {
        n /= 3;
        count++;
    }
    return count;
}

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int l, r;
        cin >> l >> r;
        int count = 0;
        count += Count(l);
        int power = count, expo = pow(3, power);
        for(int i=l+1; i<=r; i++)
        {
            if(i < expo)
            {
                count += power;
            }
            else
            {
                power++;
                expo *= 3;
                count += power;
            }
        }
        count += Count(l);
        cout << count << endl;
    }
}