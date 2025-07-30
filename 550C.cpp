#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for(int i=0; i<s.size(); i++)
    {
        if((s[i] - '0') % 8 == 0)
        {
            cout << "YES" << endl << s[i] << endl;
            return 0;
        }
    }
    for(int i=0; i<s.size()-1; i++)
    {
        for(int j=i+1; j<s.size(); j++)
        {
            if(((s[i] - '0') * 10 + (s[j] - '0')) % 8 == 0)
            {
                cout << "YES" << endl << ((s[i] - '0') * 10 + (s[j] - '0')) << endl;
                return 0;
            }
        }
    }
    for(int i=0; i<s.size()-2; i++)
    {
        for(int j=i+1; j<s.size()-1; j++)
        {
            for(int k=j+1; k<s.size(); k++)
            {
                if(((s[i] - '0') * 100 + (s[j] - '0') * 10 + (s[k] - '0')) % 8 == 0)
                {
                    cout << "YES" << endl << ((s[i] - '0') * 100 + (s[j] - '0') * 10 + (s[k] - '0')) << endl;
                    return 0;
                }
            }
        }
    }
    cout << "NO" << endl;
}