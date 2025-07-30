#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n, d, k;
        cin >> n >> d >> k;
        vector<int> A(n+1, 0);
        for(int i=0; i<k; i++)
        {
            int l, r;
            cin >> l >> r;
            A[l] += 1;
            if(r+1 <= n)
            {
                A[r+1] -= 1;
            }
        }
        for(int i=1; i<=n; i++)
        {
            A[i] += A[i-1];
        }
        int current = 0;
        for(int i=1; i<=d; i++)
        {
            current += A[i];
        }
        int maxnum = current, minnum = current;
        int bstart = 1, mstart = 1;
        for(int i=2; i<=n-d+1; i++)
        {
            current -= A[i-1];
            current += A[i+d-1];
            if(current > maxnum)
            {
                maxnum = current;
                bstart = i;
            }
            if(current < minnum)
            {
                minnum = current;
                mstart = i;
            }
        }
        cout << bstart << " " << mstart << endl;
    }
}