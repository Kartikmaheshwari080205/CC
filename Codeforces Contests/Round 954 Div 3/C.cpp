#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n, m;
        cin >> n >> m;
        string s1, s2;
        cin >> s1;
        vector<int> A(m);
        for(int i=0; i<m; i++)
        {
            cin >> A[i];
            A[i]--;
        }
        cin >> s2;

        vector<bool> visited(n, false);
        sort(A.begin(), A.end());
        sort(s2.begin(), s2.end());
        int start = 0;
        for(int i=0; i<m; i++)
        {
            if(!visited[A[i]])
            {
                s1[A[i]] = s2[start++];
                visited[A[i]] = true;
            }
        }
        cout << s1 << endl;
    }
}