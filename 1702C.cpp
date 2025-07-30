#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n, k;
        cin >> n >> k;
        int a1, b1;
        vector<int> A(n);
        map<int, vector<int>> Map;
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
            Map[A[i]].push_back(i);
        }
        
        for(int i=0; i<k; i++)
        {
            cin >> a1 >> b1;
            if(Map.find(a1) != Map.end() && Map.find(b1) != Map.end() && Map[a1].front() < Map[b1].back())
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