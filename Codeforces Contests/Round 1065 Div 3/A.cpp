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
        int count = 0;
        for(int i=0; i<=n/2; i++)
        {
            int rem = n - 2 * i;
            if(rem % 4 == 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}