#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        vector<int> evena, odda, evenb, oddb;
        for(int i=0; i<n; i++)
        {
            if(a[i] == '1')
            {
                if(i % 2 == 0)
                {
                    evena.push_back(i);
                }
                else
                {
                    odda.push_back(i);
                }
            }
            if(b[i] == '1')
            {
                if(i % 2 == 0)
                {
                    evenb.push_back(i);
                }
                else
                {
                    oddb.push_back(i);
                }
            }
        }
        if(evena.size() != evenb.size() || odda.size() != oddb.size())
        {
            cout << -1 << endl;
        }
        else
        {
            long long result = 0;
            for(int i=0; i<evena.size(); i++)
            {
                result += abs(evena[i] - evenb[i]) / 2;
            }
            for(int i=0; i<odda.size(); i++)
            {
                result += abs(odda[i] - oddb[i]) / 2;
            }
            cout << result << endl;
        }
    }
}