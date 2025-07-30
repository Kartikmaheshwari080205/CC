#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n;
        long long x, y;
        cin >> n >> x >> y;
        vector<int> A(n);
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
        }

        sort(A.begin(), A.end());
        int count = 0;
        for(int i=0; i<n; i++)
        {
            long long low = x - A[i], high = y - A[i];
            long long left = lower_bound(A.begin(), A.end(), low) - A.begin();
            long long right = upper_bound(A.begin(), A.end(), high) - A.begin();
            count += (right - left);
        }
        cout << count << endl;
    }
}