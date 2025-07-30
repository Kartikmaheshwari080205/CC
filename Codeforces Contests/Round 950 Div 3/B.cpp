#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> A(n);
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
        }
        int fav = A[f-1];
        sort(A.begin(), A.end(), greater<int>());
        if(n == k)
        {
            cout << "YES" << endl;
        }
        else if(A[k-1] > fav)
        {
            cout << "NO" << endl;
        }
        else if(A[k-1] < fav || (A[k-1] == fav && A[k] < fav))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "MAYBE" << endl;
        }
    }
}