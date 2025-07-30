#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int m = s1.size(), n = s2.size();
        if(m < n)
        {
            cout << "NO" << endl;
        }
        int i=0, j=0;
        while(i < m && j < n)
        {
            if(s1[i] == s2[j] || s1[i] == '?')
            {
                
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        if(j != n)
        {
            cout << "NO" << endl;
            continue;
        }
        i = 0, j = 0;
        while(i < m)
        {
            if(s1[i] == s2[j])
            {
                j++;
            }
            if(s1[i] == '?')
            {
                if(j < n)
                {
                    s1[i] = s2[j++];
                }
                else
                {
                    s1[i] = 'a';
                }
            }
            i++;
        }
        cout << "YES" << endl;
        cout << s1 << endl;
    }
}