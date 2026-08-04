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
        vector<long long> A(n), B(n);
        long long xora = 0, xorb = 0;
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
            xora ^= A[i];
        }
        for(int i=0; i<n; i++)
        {
            cin >> B[i];
            xorb ^= B[i];
        }
        vector<long long> resulta, resultb;
        for(int i=0; i<n; i++)
        {
            resulta.push_back(A[i] ^ xora);
            resultb.push_back(B[i] ^ xorb);
        }
        resulta.push_back(xora);
        resultb.push_back(xorb);
        sort(resulta.begin(), resulta.end());
        sort(resultb.begin(), resultb.end());
        if(resulta == resultb)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}