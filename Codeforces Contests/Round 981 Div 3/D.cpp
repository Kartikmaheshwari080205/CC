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
        vector<int> A(n);
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
        }
        unordered_map<int, int> prefix;
        int presum = 0, last = -1, count = 0;
        prefix[0] = -1;
        for(int i=0; i<n; i++)
        {
            presum += A[i];
            if(prefix.find(presum) != prefix.end())
            {
                int start = prefix[presum];
                if(start >= last)
                {
                    count++;
                    last = i;
                }
            }
            prefix[presum] = i;
        }
        cout << count << endl;
    }
}