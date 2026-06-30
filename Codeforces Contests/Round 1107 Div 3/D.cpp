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
        long long maxpossible = 0, prev = 0;
        bool flag = true;
        for(int i=1; i<=n; i++)
        {
            long long current = B[i-1] - A[i-1];
            long long difference = (i % 2 == 0 ? current : -current);
            long long low, newmax;
            if(i % 2 == 1)
            {
                low = max(0LL, difference);
                newmax = maxpossible;
            }
            else
            {
                low = max(0LL, difference);
                newmax = difference + maxpossible - prev;
            }
            if(newmax < low)
            {
                flag = false;
                break;
            }
            maxpossible = newmax;
            prev = difference;
        }
        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}