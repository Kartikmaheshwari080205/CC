#include <bits/stdc++.h>
using namespace std;

const int MAXA = 1000000;
bool square[MAXA + 1];

int main()
{
    for(int i=0; 1LL*i*i<=MAXA; i++)
    {
        square[i * i] = true;
    }
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n;
        cin >> n;
        vector<int> A(n + 1);
        for(int i=1; i<=n; i++)
        {
            cin >> A[i];
        }
        vector<vector<int>> graph(n+1);
        for(int i=0; i<n-1; i++)
        {
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        vector<int> parent(n+1, 0), order;
        order.reserve(n);
        stack<int> st;
        st.push(1);
        parent[1] = -1;
        while(!st.empty())
        {
            int u = st.top();
            st.pop();
            order.push_back(u);
            for (int v : graph[u])
            {
                if(v == parent[u])
                {
                    continue;
                }
                parent[v] = u;
                st.push(v);
            }
        }
        vector<int> subtree(n + 1, 1);
        for (int i=n-1; i>=1; i--)
        {
            int u = order[i];
            subtree[parent[u]] += subtree[u];
        }
        long long result = 0;
        for(int u=1; u<=n; u++)
        {
            if(!square[A[u]])
            {
                continue;
            }
            long long sum = 0;
            long long pairsum = 0;
            long long triplesum = 0;
            long long x = 1;
            triplesum += pairsum * x;
            pairsum += sum * x;
            sum += x;
            for(int v : graph[u])
            {
                if(parent[v] != u)
                {
                    continue;
                }
                x = subtree[v];
                triplesum += pairsum * x;
                pairsum += sum * x;
                sum += x;
            }
            long long outside = n - subtree[u];
            result += triplesum + outside * pairsum;
        }
        cout << result << endl;
    }
    return 0;
}