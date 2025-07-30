#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n, s, m;
        cin >> n >> s >> m;
        vector<pair<int, int>> A(n);
        for(int i=0; i<n; i++)
        {
            cin >> A[i].first >> A[i].second;
        }
        if(A[0].first >= s)
        {
            cout << "YES" << endl;
            continue;
        }
        bool flag = false;
        for(int i=1; i<n; i++)
        {
            if(A[i].first - A[i-1].second >= s)
            {
                flag = true;
                break;
            }
        }
        if(m - A[n-1].second >= s)
        {
            flag = true;
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