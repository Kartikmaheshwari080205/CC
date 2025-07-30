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
        vector<int> A(n+1);
        for(int i=1; i<=n; i++)
        {
            cin >> A[i];
        }
        string s;
        cin >> s;

        vector<int> color(n+1);
        for(int i=1; i<=n; i++)
        {
            color[i] = s[i-1] - '0';
        }
        vector<int> result(n+1);
        vector<bool> visited(n+1, false);
        for(int i=1; i<=n; i++)
        {
            if(!visited[i])
            {
                int current = i;
                vector<int> cycle;
                int count = 0;
                while(!visited[current])
                {
                    visited[current] = true;
                    cycle.push_back(current);
                    if(color[current] == 0)
                    {
                        count++;
                    }
                    current = A[current];
                }
                for(int i : cycle)
                {
                    result[i] = count;
                }
            }
        }
        for(int i=1; i<=n; i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }
}