#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n;
        cin >> n;
        vector<vector<int>> child(n+1);
        for(int i=2; i<=n; i++)
        {
            int p;
            cin >> p;
            child[p].push_back(i);
        }
        vector<int> A(n+1);
        for(int i=1; i<=n; i++)
        {
            cin >> A[i];
        }
        vector<int> order;
        stack<int> st;
        st.push(1);
        while(!st.empty())
        {
            int u = st.top();
            st.pop();
            order.push_back(u);
            for(int v : child[u])
            {
                st.push(v);
            }
        }
        reverse(order.begin(), order.end());
        vector<int> left(n+1), right(n+1), count(n+1);
        vector<char> result(n+1, 1);
        for(int u : order)
        {
            if(child[u].empty())
            {
                count[u] = 1;
                left[u] = right[u] = A[u];
                result[u] = 1;
                continue;
            }
            bool flag = true;
            int total = 0;
            int minnum = INT_MAX, maxnum = INT_MIN;
            for(int v : child[u])
            {
                if(!result[v])
                {
                    flag = false;
                }
                total += count[v];
                minnum = min(minnum, left[v]);
                maxnum = max(maxnum, right[v]);
            }
            if(flag)
            {
                int k = child[u].size();
                int start = 0;
                for(int i=1; i<k; i++)
                {
                    if(left[child[u][i]] < left[child[u][start]])
                    {
                        start = i;
                    }
                }
                for(int t=0; t<k-1 && flag; t++)
                {
                    int child1 = child[u][(start + t) % k], child2 = child[u][(start + t + 1) % k];
                    if(right[child1] + 1 != left[child2])
                    {
                        flag = false;
                    }
                }
                if(maxnum - minnum + 1 != total)
                {
                    flag = false;
                }
            }
            result[u] = flag;
            count[u] = total;
            left[u] = minnum;
            right[u] = maxnum;
        }
        cout << (result[1] ? "YES" : "NO") << endl;
    }
}