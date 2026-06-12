#include<bits/stdc++.h>
using namespace std;

// int LOGX(int n, int x)
// {
//     int result = 0;
//     while(n)
//     {
//         n /= x;
//         result++;
//     }
//     return result;
// }

// int BFS(int a, int b, int x)
// {
//     int maxsteps = min(LOGX(a, x) + LOGX(b, x) + 2, abs(a - b));
//     queue<tuple<int, int, int>> q;
//     q.push({a, b, 0});
//     set<pair<int, int>> visited;
//     visited.insert({a, b});
//     while(!q.empty())
//     {
//         int ca = get<0>(q.front()), cb = get<1>(q.front()), steps = get<2>(q.front());
//         q.pop();
//         if(steps > maxsteps)
//         {
//             continue;
//         }
//         if(ca == cb)
//         {
//             return steps;
//         }
//         vector<pair<int, int>> nextstate = {{ca + 1, cb}, {ca / x, cb}, {ca, cb + 1}, {ca, cb / x}};
//         for(auto& next : nextstate)
//         {
//             int na = next.first, nb = next.second;
//             if(!visited.count({na, nb}))
//             {
//                 visited.insert({na, nb});
//                 q.push({na, nb, steps + 1});
//             }
//         }
//     }
//     return -1;
// }

long long GetCost(long long n, long long target, long long x)
{
    if(target > n)
    {
        return target - n;
    }
    long long current = n;
    long long result = 0;
    while(current > target)
    {
        current  /= x;
        result++;
    }
    return result + (target - current);
}

int BFS(int a, int b, int x)
{
    set<long long> targets = {0};
    long long ta = a;
    while(ta)
    {
        targets.insert(ta);
        ta /= x;
    }
    long long tb = b;
    while(tb)
    {
        targets.insert(tb);
        tb /= x;
    }
    long long result = abs(a - b);
    for(long long target : targets)
    {
        long long opa = GetCost(a, target, x);
        long long opb = GetCost(b, target, x);
        result = min(result, opa + opb);
    }
    return result;
}

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int a, b, x;
        cin >> a >> b >> x;
        cout << BFS(a, b, x) << endl;
    }
}