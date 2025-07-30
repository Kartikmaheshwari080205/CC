#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n, k, bottle, price;
        cin >> n >> k;
        unordered_map<int, long long> A;
        for(int i=0; i<k; i++)
        {
            cin >> bottle >> price;
            A[bottle] += price;
        }

        priority_queue<long long, vector<long long>, greater<long long>> minHeap;
        for(auto a : A)
        {
            minHeap.push(a.second);
            if(minHeap.size() > n)
            {
                minHeap.pop();
            }
        }
        long long sum = 0;
        while(!minHeap.empty())
        {
            sum += minHeap.top();
            minHeap.pop();
        }
        cout << sum << endl;
    }
}