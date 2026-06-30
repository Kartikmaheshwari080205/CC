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
        int count = 1;
        for(int i=1; i<n; i++)
        {
            if(s[i] != s[i - 1])
            {
                count++;
            }
        }
        if(count == 2)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
}