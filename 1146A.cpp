#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int counta = count(s.begin(), s.end(), 'a');
    if(counta > s.size() / 2)
    {
        cout << s.size() << endl;
    }
    else
    {
        cout << 2 * counta - 1 << endl;
    }
}