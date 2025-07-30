#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        string s;
        cin >> s;
        int n = s.size();
        int flag = 0;
        for(int j=1; j<n; j++)
        {
            if(s[j] != s[j-1])
            {
                flag = 1;
                char temp = s[j-1];
                s[j-1] = s[j];
                s[j] = temp;
                break;
            }
        }
        if(flag)
        {
            cout << "YES" << endl << s << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}