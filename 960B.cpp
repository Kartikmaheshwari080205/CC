#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k1, k2;
    cin >> n >> k1 >> k2;
    vector<int> A(n), B(n);
    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }
    for(int i=0; i<n; i++)
    {
        cin >> B[i];
    }

    priority_queue<int> pq;
    for(int i=0; i<n; i++)
    {
        pq.push(abs(A[i] - B[i]));
    }
    int total_operations = k1 + k2;
    while(total_operations > 0)
    {
        int maxdiff = pq.top();
        pq.pop();
        maxdiff = abs(maxdiff - 1);
        pq.push(maxdiff);
        total_operations--;
    }
    long long answer = 0;
    while(!pq.empty())
    {
        int diff = pq.top();
        pq.pop();
        answer += (long long)diff * diff;
    }
    cout << answer << endl;
    return 0;
}