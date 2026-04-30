#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n;
        string s;
        cin >> n >> s;
        int open = 0, close = 0;
        for(char c : s)
        {
            c == '(' ? open++ : close++;
        }
        if(open != close)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}