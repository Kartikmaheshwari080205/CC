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
        vector<string> A(n);
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
        }
        for(int i=0; i<n/k; i++)
        {
            for(int j=0; j<n/k; j++)
            {
                cout << A[i*k][j*k];
            }
            cout << endl;
        }
    }
}