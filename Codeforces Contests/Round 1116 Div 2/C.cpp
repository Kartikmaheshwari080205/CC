#include<bits/stdc++.h>
using namespace std;

pair<int, int> SimulatePassing(int n, int k, string s)
{
    int scorer = 0, scoreb = 0;
    int mover = 0, moveb = 0;
    for(int i=0; i<2*n; i++)
    {
        if(s[i] == '1')
        {
            if(i % 2 == 0)
            {
                scorer++;
            }
            else
            {
                scoreb++;
            }
            int next = (i + 1) % (2 * n);
            if(s[next] == '0')
            {
                if(i % 2 == 0)
                {
                    mover++;
                }
                else
                {
                    moveb++;
                }
            }
        }
    }
    return {scoreb - moveb + mover, scorer - mover + moveb};
}

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        auto result = SimulatePassing(n, k, s);
        cout << result.first << " " << result.second << endl;
    }
}