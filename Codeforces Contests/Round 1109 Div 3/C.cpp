#include<bits/stdc++.h>
using namespace std;

void DFS(int u, vector<vector<int>>& adj, vector<bool>& visited, vector<int>& components, int componentid)
{
    components[u] = componentid;
    visited[u] = true;
    for(auto& v : adj[u])
    {
        if(!visited[v])
        {
            DFS(v, adj, visited, components, componentid);
        }
    }
    return;
}

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> A(n);
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
        }
        vector<vector<int>> adj(n);
        for(int i=0; i<n; i++)
        {
            if(i + x < n)
            {
                adj[i].push_back(i + x);
                adj[i + x].push_back(i);
            }
            if(i + y < n)
            {
                adj[i].push_back(i + y);
                adj[i + y].push_back(i);
            }
        }
        vector<int> components(n);
        int componentid = 1;
        vector<bool> visited(n, false);
        for(int i=0; i<n; i++)
        {
            if(!visited[i])
            {
                DFS(i, adj, visited, components, componentid);
                componentid++;
            }
        }
        bool flag = true;
        for(int i=0; i<n; i++)
        {
            if(components[i] != components[A[i] - 1])
            {
                flag = false;
                break;
            }
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