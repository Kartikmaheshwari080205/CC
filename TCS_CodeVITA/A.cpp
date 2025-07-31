#include<bits/stdc++.h>
using namespace std;

bool isValid(int m, int n, int nx, int ny, vector<vector<int>>& grid, vector<vector<bool>>& visited)
{
    return nx >= 0 && nx < m && ny >= 0 && ny < n && grid[nx][ny] == 0 && visited[nx][ny] == false;
}

int MinMoves(int m, int n, vector<vector<int>>& grid, pair<int, int> source, pair<int, int> destination, pair<int, int> move)
{
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    queue<pair<pair<int, int>, int>> q;
    q.push({source, 0});
    visited[source.first][source.second] = true;
    vector<pair<int, int>> directions = {{move.first, move.second}, {move.second, -move.first}, {-move.second, move.first}, {-move.first, -move.second}};
    while(!q.empty())
    {
        auto [position, distance] = q.front();
        auto [x, y] = position;
        q.pop();
        if(position == destination)
        {
            return distance;
        }
        for(auto [dx, dy] : directions)
        {
            int nx = x + dx, ny = y + dy;
            if(isValid(m, n, nx, ny, grid, visited))
            {
                visited[nx][ny] = true;
                q.push({{nx, ny}, distance + 1});
            }
        }
    }
    return -1;
}

int main()
{
	int n, m;
    cin >> m >> n;
    vector<vector<int>> grid(m, vector<int>(n, 0));
    for(int i=0; i<m; i++)
    {
    	for(int j=0; j<n; j++)
        {
        	cin >> grid[i][j];
        }
    }
    int sx, sy, dx, dy, mx, my;
    cin >> sx >> sy;
    cin >> dx >> dy;
    cin >> mx >> my;
    int result = MinMoves(m, n, grid, {sx, sy}, {dx, dy}, {mx, my});
    cout << result << endl;
    return 0;
}