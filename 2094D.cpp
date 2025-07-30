#include<bits/stdc++.h>
using namespace std;

vector<pair<char, int>> Compress(const string& s)
{
    vector<pair<char, int>> result;
    int i=0;
    while(i < s.size())
    {
        char c = s[i];
        int count = 0;
        while(i < s.size() && s[i] == c)
        {
            count++;
            i++;
        }
        result.push_back({c, count});
    }
    return result;
}

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        string p, s;
        cin >> p >> s;
        bool flag = true;
        auto pg = Compress(p);
        auto sg = Compress(s);
        if(pg.size() != sg.size())
        {
            flag = false;
        }
        for(int i=0; i < pg.size(); i++)
        {
            char charp = pg[i].first;
            int cp = pg[i].second;
            char chars = sg[i].first;
            int cs = sg[i].second;
            if(charp != chars)
            {
                flag = false;
                break;
            }
            if(cs < cp)
            {
                flag = false;
                break;
            }
            if(cs > 2 * cp)
            {
                flag = false;
                break;
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
}