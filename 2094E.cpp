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
        vector<int> bitcount(32, 0);
        for(int i=0; i<n; i++)
        {
            for(int b=0; b<32; b++)
            {
                if(A[i] & (1 << b))
                {
                    bitcount[b]++;
                }
            }
        }
        long long maxresult = 0;
        for(int i=0; i<n; i++)
        {
            long long result = 0;
            for(int b=0; b<32; b++)
            {
                if(A[i] & (1 << b))
                {
                    result += (1LL << b) * (n - bitcount[b]);
                }
                else
                {
                    result += (1LL << b) * bitcount[b];
                }
            }
            maxresult = max(maxresult, result);
        }
        cout << maxresult << endl;
    }
}