#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        string s;
        cin >> s;
        reverse(s.begin(), s.end());
        for(char& c : s)
        {
            if(c == 'p')
            {
                c = 'q';
            }
            else if(c == 'q')
            {
                c = 'p';
            }
        }
        cout << s << endl;
    }
}