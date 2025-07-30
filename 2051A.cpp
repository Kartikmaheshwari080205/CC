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
        vector<int> A(n), B(n);
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
        }
        for(int i=0; i<n; i++)
        {
            cin >> B[i];
        }

        int sum = 0;
        for(int i=0; i<n-1; i++)
        {
            if(A[i] > B[i+1])
            {
                sum += (A[i] - B[i+1]);
            }
        }
        sum += A[n-1];
        cout << sum << endl;
    }
}