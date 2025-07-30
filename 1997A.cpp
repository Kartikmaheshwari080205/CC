#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        string s;
        cin >> s;
        if(s.size() == 1)
        {
            if(s[0] == 'a')
            {
                cout << "ab" << endl;
            }
            else
            {
                cout << s[0] << 'a' << endl;
            }
        }
        else
        {
            bool flag = 0;
            for(int i=0; i<s.size()-1; i++)
            {
                if(s[i] == s[i+1])
                {
                    char c  = s[i];
                    if(c == 'a')
                    {
                        s.insert(s.begin() + i+1, 1, 'b');
                    }
                    else
                    {
                        s.insert(s.begin() + i+1, 1, 'a');
                    }
                    flag = true;
                    break;
                }
            }
            if(!flag)
            {
                if(s[0] == 'a')
                {
                    if(s[1] == 'b')
                    {
                        s.insert(s.begin() + 1, 1, 'c');
                    }
                    else
                    {
                        s.insert(s.begin() + 1, 1, 'b');
                    }
                }
                else if(s[0] == 'b')
                {
                    if(s[1] == 'a')
                    {
                        s.insert(s.begin() + 1, 1, 'c');
                    }
                    else
                    {
                        s.insert(s.begin() + 1, 1, 'a');
                    }
                }
                else
                {
                    if(s[1] == 'a')
                    {
                        s.insert(s.begin() + 1, 1, 'b');
                    }
                    else
                    {
                        s.insert(s.begin() + 1, 1, 'a');
                    }
                }
            }
            cout << s << endl;
        }
    }
}