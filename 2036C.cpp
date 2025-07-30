#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        string s, req;
        req = "1100";
        cin >> s;
        int n = s.size();
        int q, index, v;
        cin >> q;

        set<int> indices;
        for(int i=0; i<=n-4; i++)
        {
            if(s.substr(i, 4) == req)
            {
                indices.insert(i);
            }
        }
        for(int i=0; i<q; i++)
        {
            cin >> index >> v;
            index--;
            for(int j = max(0, index-3); j <= min(n-4, index); j++)
            {
                if(s.substr(j, 4) == req)
                {
                    indices.erase(j);
                }
            }
            s[index] = v + '0';
            for(int j = max(0, index-3); j <= min(n-4, index); j++)
            {
                if(s.substr(j, 4) == req)
                {
                    indices.insert(j);
                }
            }
            if(!indices.empty())
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}