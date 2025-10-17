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
        int result = 0;
        vector<int> A(n);
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
            result = max(result, A[i]);
        }

        cout << result << endl;
    }
}