#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    stack<char> A;
    bool flag = true;
    for(int i=0; i < s.size(); i++)
    {
        if(s[i] == '(')
        {
            A.push('(');
        }
        else if(s[i] == ')')
        {
            if(A.empty())
            {
                flag = false;
                break;
            }
            A.pop();
        }
    }
    if(flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}