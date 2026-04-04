#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n = 7;
        vector<int> A(n);
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
        }
        sort(A.begin(), A.end());
        int sum = A[n-1];
        for(int i=0; i<n-1; i++)
        {
            sum += A[i] * (-1);
        }
        cout << sum << endl;
    }
}