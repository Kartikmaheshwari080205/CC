#include<bits/stdc++.h>
using namespace std;

void Remove(char c, string& s, vector<int>& pos)
{
    int n = s.size();
    for(int i=0; i<n; i++)
    {
        if(s[i] == c)
        {
            pos.push_back(i+1);
        }
    }
    return;
}

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n;
        cin >> n;
        int count0 = 0, count1 = 0;
        string s(n, ' ');
        for(int i=0; i<n; i++)
        {
            cin >> s[i];
            s[i] == '1' ? count1++ : count0++;
        }

        vector<int> pos;
        if(count0 == 0 || count1 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            if(count0 <= count1)
            {
                Remove('0', s, pos);
            }
            else
            {
                Remove('1', s, pos);
            }
            cout << pos.size() << endl;
            for(int p : pos)
            {
                cout << p << " ";
            }
            cout << endl;
        }
    }
}