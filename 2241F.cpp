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
        string s;
        cin >> s;
        bool flag = false;
        int ones = 0;
        for(char c : s)
        {
            if(c == '0')
            {
                if(ones % 2)
                {
                    flag = true;
                    break;
                }
            }
            else
            {
                ones++;
            }
        }
        if(!flag)
        {
            int zeroes = 0;
            for(int i=n-1; i>=0; i--)
            {
                if(s[i] == '1')
                {
                    if(zeroes % 2)
                    {
                        flag = true;
                        break;
                    }
                }
                else
                {
                    zeroes++;
                }
            }
        }
        if(flag)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }
}