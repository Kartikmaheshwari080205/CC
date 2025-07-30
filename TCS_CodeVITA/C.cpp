#include<bits/stdc++.h>
using namespace std;

void DFS(int u, vector<vector<int>>& graph, vector<bool>& visited, vector<int>& component)
{
    visited[u] = true;
    component.push_back(u);
    for(int v : graph[u])
    {
        if(!visited[v])
        {
            DFS(v, graph, visited, component);
        }
    }
}

bool isIndependent(vector<int>& subset, vector<vector<int>>& graph)
{
    unordered_set<int> s(subset.begin(), subset.end());
    for(int u : s)
    {
        for(int v : graph[u])
        {
            if(s.count(v))
            {
                return false;
            }
        }
    }
    return true;
}

int MaxExpertise(vector<int>& component, vector<vector<int>>& graph, vector<int>& expertise)
{
    int sz = component.size();
    int maxsum = 0;
    for(int mask = 0; mask < (1 << sz); mask++)
    {
        vector<int> subset;
        int current = 0;
        for(int i=0; i<sz; i++)
        {
            if(mask & (1 << i))
            {
                subset.push_back(component[i]);
                current += expertise[component[i]];
            }
        }
        if(isIndependent(subset, graph))
        {
            maxsum = max(maxsum, current);
        }
    }
    return maxsum;
}

int main()
{
    int n, c;
    cin >> n >> c;
    vector<vector<int>> graph(n);
    for(int i=0; i<c; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u-1].push_back(v-1);
        graph[v-1].push_back(u-1);
    }
    vector<int> expertise(n);
    for(int i=0; i<n; i++)
    {
        cin >> expertise[i];
    }
    vector<bool> visited(n, false);
    int total = 0;
    for(int i=0; i<n; i++)
    {
        if(!visited[i])
        {
            vector<int> component;
            DFS(i, graph, visited, component);
            total += MaxExpertise(component, graph, expertise);
        }
    }
    cout << total << endl;
    return 0;
}