#include <bits/stdc++.h>
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

bool isIndependent(const vector<int>& subset, const vector<vector<int>>& graph)
{
    unordered_set<int> s(subset.begin(), subset.end());
    for(int u : s)
    {
        for(int v : graph[u])
        {
            if(s.count(v)) return false;
        }
    }
    return true;
}

int MaxIndependentSetSmall(vector<int>& component, vector<vector<int>>& graph, vector<int>& expertise)
{
    int sz = component.size();
    int maxsum = 0;
    for(int mask = 0; mask < (1 << sz); mask++)
    {
        vector<int> subset;
        int current = 0;
        for(int i = 0; i < sz; i++)
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

int GreedyApprox(vector<int>& component, vector<vector<int>>& graph, vector<int>& expertise)
{
    int n = component.size();
    vector<bool> selected(n, false), blocked(n, false);
    vector<pair<double, int>> ratio; // (expertise / degree, index)

    for(int i = 0; i < n; i++)
    {
        int u = component[i];
        int degree = graph[u].size();
        double score = (degree == 0) ? 1e9 : (double)expertise[u] / degree;
        ratio.emplace_back(score, i);
    }

    sort(ratio.rbegin(), ratio.rend());

    int sum = 0;
    vector<bool> used(component.size(), false);
    unordered_set<int> taken;

    for(auto& [_, i] : ratio)
    {
        int u = component[i];
        if(taken.count(u)) continue;
        bool conflict = false;
        for(int v : graph[u])
        {
            if(taken.count(v)) { conflict = true; break; }
        }
        if(!conflict)
        {
            sum += expertise[u];
            taken.insert(u);
        }
    }

    return sum;
}

int main()
{
    int n, c;
    cin >> n >> c;
    vector<vector<int>> graph(n);
    for(int i = 0; i < c; i++)
    {
        int u, v;
        cin >> u >> v;
        u--; v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<int> expertise(n);
    for(int i = 0; i < n; i++)
    {
        cin >> expertise[i];
    }

    vector<bool> visited(n, false);
    int total = 0;
    for(int i = 0; i < n; i++)
    {
        if(!visited[i])
        {
            vector<int> component;
            DFS(i, graph, visited, component);
            if(component.size() <= 20)
                total += MaxIndependentSetSmall(component, graph, expertise);
            else
                total += GreedyApprox(component, graph, expertise);
        }
    }

    cout << total << endl;
    return 0;
}
