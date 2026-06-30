#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int x;
        cin >> x;
        string s = to_string(x);
        string result = "";
        result += '1';
        result += string(s.length() - 1, '0');
        result += '1';
        cout << result << endl;
    }
}