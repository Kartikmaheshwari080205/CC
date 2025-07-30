#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        string s, result;
        for(int i=0; i<3; i++)
        {
            cin >> s;
            result += s[0];
        }
        cout << result << endl;
    }
}