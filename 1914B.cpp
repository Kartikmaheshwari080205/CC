#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n, k;
        cin >> n >> k;
        vector<int> A(n);
        for(int j=n-k; j<=n; j++)
        {
            A[j-(n-k)] = j;
        }
        int current = n-k-1;
        for(int j=k+1; j<n; j++)
        {
            A[j] = current;
            current--;
        }
        for(int j=0; j<n; j++)
        {
            cout << A[j] << " ";
        }
        cout << endl;
    }
}