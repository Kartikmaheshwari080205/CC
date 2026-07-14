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
        int maxlength = 0, length = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i] == '#')
            {
                length++;
                maxlength = max(maxlength, length);
            }
            else
            {
                length = 0;
            }
        }
        cout << (maxlength + 1) / 2 << endl;
    }
}