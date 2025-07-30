#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n, k;
        cin >> n >> k;
        vector<int> A(n);
        unordered_map<int, int> frequency;
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
            frequency[A[i]]++;
        }
        int score = 0;
        for(int x=1; x<=n; x++)
        {
            int complement = k - x;
            if(complement >= 1 && complement <= n)
            {
                int pairs = min(frequency[x], frequency[complement]);
                if(x == complement)
                {
                    pairs = frequency[x] / 2;
                }
                score += pairs;
                frequency[x] -= pairs;
                frequency[complement] -= pairs;
            }
        }
        cout << score << endl;
    }
}