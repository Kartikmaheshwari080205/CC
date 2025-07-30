#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
 
    int n = s.size();
    if(n == 1 && s[0] == '0')
    {
        cout << "0" << endl;
    }
    else if(n % 2 == 0)
    {
        cout << n / 2 << endl;
    }
    else
    {
        int countzero = count(s.begin(), s.end(), '0');
        if(countzero == n-1)
        {
            cout << n / 2 << endl;
        }
        else
        {
            cout << n / 2 + 1 << endl;
        }
    }
}