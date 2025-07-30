#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<vector<int>>& board, int r, int c, int val)
{
    for(int i=0; i<9; i++)
    {
        if(i != c && board[r][i] == val)
        {
            return false;
        }
        if(i != r && board[i][c] == val)
        {
            return false;
        }
    }
    int startr = (r / 3) * 3, startc = (c / 3) * 3;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            int x = startr + i, y = startc + j;
            if(x != r || y != c)
            {
                if(board[x][y] == val)
                {
                    return false;
                }
            }
        }
    }
    return true;
}

int main()
{
    int k;
    cin >> k;
    vector<vector<int>> board(9, vector<int>(9));
    vector<pair<int, int>> modifiable;
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            int x;
            cin >> x;
            if(x == 0)
            {
                board[i][j] = 0;
            }
            else if(x < 10)
            {
                board[i][j] = x;
            }
            else if(x % 10 == 0)
            {
                board[i][j] = x / 10;
                modifiable.push_back({i, j});
            }
            else if(x / 10 == 0)
            {
                board[i][j] = x;
                modifiable.push_back({i, j});
            }
            else
            {
                board[i][j] = x;
            }
        }
    }
    vector<pair<int, int>> tochange;
    for(auto& pos : modifiable)
    {
        int r = pos.first, c = pos.second;
        int val = board[r][c];
        board[r][c] = 0;
        if(!isValid(board, r, c, val))
        {
            tochange.push_back({r, c});
        }
        board[r][c] = val;
    }
    if(tochange.size() == 0)
    {
        cout << "Won" << endl;
    }
    else if(tochange.size() <= k)
    {
        for(auto& pos : tochange)
        {
            cout << pos.first << " " << pos.second << endl;
        }
    }
    else
    {
        cout << "Impossible" << endl;
    }
    return 0;
}