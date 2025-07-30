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
        vector<pair<int, int>> points;
        for(int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                char cell;
                cin >> cell;
                if(cell == '#')
                {
                    points.push_back({i+1, j+1});
                }
            }
        }

        sort(points.begin(), points.end());
        int median_x = points[points.size() / 2].first;
        int median_y = points[points.size() / 2].second;
        cout << median_x << " " << median_y << endl;
    }
}