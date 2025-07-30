#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> A(n, vector<int> (m));
    map<int, vector<pair<int, int>>> Map;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> A[i][j];
            Map[A[i][j]].push_back({i, j});
        }
    }

    long long sum = 0;
    for(auto& color : Map)
    {
        vector<pair<int, int>>& positions = color.second;
        int x = positions.size();
        for(int i=0; i<x-1; i++)
        {
            for(int j=i+1; j<x; j++)
            {
                int r1 = positions[i].first, c1 = positions[i].second;
                int r2 = positions[j].first, c2 = positions[j].second;
                sum += abs(r1-r2) + abs(c1-c2);
            }
        }
    }
    cout << sum << endl;
}