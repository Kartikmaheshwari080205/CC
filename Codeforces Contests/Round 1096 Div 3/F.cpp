#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n;
        cin >> n;
        vector<int> A(n);
        vector<int> sorted(n);
        long long total = 0;
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
            sorted[i] = A[i];
            total += (long long)A[i] * (i + 1);
        }
        sort(sorted.begin(), sorted.end());
        long long sum = 0;
        for(int i=0; i<n; i++)
        {
            sum += (long long)sorted[i] * (i + 1);
        }
        long long result = sum - total;
        for(int i=0; i<n; i++)
        {
            if(A[i] > 0)
            {
                int index = lower_bound(sorted.begin(), sorted.end(), A[i]) - sorted.begin();
                long long current = (sum - (index + 1)) - (total - (i + 1));
                result = max(result, current);
            }
        }
        cout << result << endl;
    }
    return 0;
}