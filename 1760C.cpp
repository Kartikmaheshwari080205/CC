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
        vector<int> B(n);
        for(int i=0; i<n; i++)
        {
            B[i] = A[i];
        }

        sort(A.begin(), A.end());
        int max = A[n-1];
        int secondmax = A[n-2];
        for(int i=0; i<n; i++)
        {
            if(B[i] != max)
            {
                cout << B[i] - max << " ";
            }
            else
            {
                cout << B[i] - secondmax << " ";
            }
        }
        cout << endl;
    }
}