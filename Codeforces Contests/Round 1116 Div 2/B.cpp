#include<bits/stdc++.h>
using namespace std;

int Sequence(string s)
{
    int n = s.size();
    int result = 0;
    int turn = 1;
    bool flag = true;
    for(int i=0; i<n; i++)
    {
        if(s[i] != '?')
        {
            if(s[i] - '0' != turn)
            {
                flag = false;
                break;
            }
        }
        turn = 1 - turn;
    }
    if(flag)
    {
        result++;
    }
    turn = 0;
    flag = true;
    for(int i=0; i<n; i++)
    {
        if(s[i] != '?')
        {
            if(s[i] - '0' != turn)
            {
                flag = false;
                break;
            }
        }
        turn = 1 - turn;
    }
    if(flag)
    {
        result++;
    }
    return result;
}

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
        string odd, even;
        for(int i=0; i<n; i++)
        {
            if(i % 2 == 0)
            {
                even += s[i];
            }
            else
            {
                odd += s[i];
            }
        }
        int result = Sequence(odd) * Sequence(even);
        cout << result << endl;
    }
}