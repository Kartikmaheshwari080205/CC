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
        long long total = 0;
        vector<int> A(n);
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
            total += A[i];
        }
        vector<int> suffix(n);
        suffix[n-1] = A[n-1];
        for(int i=n-2; i>=0; i--)
        {
            suffix[i] = min(suffix[i+1], A[i]);
        }
        long long nmove = 0;
        for(int i=0; i<n; i++)
        {
            nmove += suffix[i];
        }
        long long result = total - nmove;
        unordered_map<int, int> frequency;
        for(int i=0; i<n; i++)
        {
            frequency[suffix[i]]++;
        }
        for(int i=0; i<n; i++)
        {
            if(A[i] != suffix[i])
            {
                continue;
            }
            int val = suffix[i];
            long long decrease = frequency[val];
            result = max(result, (total - 1) - (nmove - decrease));
        }
        cout << result << endl;
    }
}