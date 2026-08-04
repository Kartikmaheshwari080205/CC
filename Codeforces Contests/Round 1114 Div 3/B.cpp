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
        string s;
        cin >> s;
        vector<pair<char, int>> groups;
        for(int i=0; i<n; )
        {
            int j = i;
            char c = s[i];
            while(j < n && s[j] == c)
            {
                j++;
            }
            groups.push_back({c, j - i});
            i = j;
        }
        int size = groups.size();
        int result = size;
        for(int i=1; i<size-1; i++)
        {
            if(groups[i].second == 1)
            {
                if(groups[i-1].first == groups[i+1].first)
                {
                    result = min(result, size - 2);
                }
                else
                {
                    result = min(result, size - 1);
                }
            }
        }
        cout << result << endl;
    }
}