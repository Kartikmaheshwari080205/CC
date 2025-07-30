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
        int x = 0;
        bool flag = true;
        for(int i=0; abs(x) <= n; i++)
        {
            if(flag)
            {
                x -= 2 * i + 1;
            }
            else
            {
                x += 2 * i + 1;
            }
            if(abs(x) > n)
            {
                if(flag)
                {
                    cout << "Sakurako" << endl;
                }
                else
                {
                    cout << "Kosuke" << endl;
                }
                break;
            }
            flag = !flag;
        }
    }
}