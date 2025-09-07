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
        vector<int> result(n);
        for(int i=0; i<n; i++)
        {
            result[i] = n - A[i] + 1;
        }
        for(int i=0; i<n; i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }
}