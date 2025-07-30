#include<bits/stdc++.h>
using namespace std;

bool Satisfied(vector<int>& A, int n, long long x, long long sum)
{
    long long newsum = sum + x;
    double newavg = (double)newsum / (n * 2);
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(A[i] < newavg)
        {
            count++;
        }
    }
    return count > n/2;
}

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

        if(n == 1 || n == 2)
        {
            cout << "-1" << endl;
        }
        else
        {
            long long sum = accumulate(A.begin(), A.end(), 0LL);
            long long left = 0, right = INT_MAX;
            int x = -1;
            while(left <= right)
            {
                int mid = left + (right - left) / 2;
                if(Satisfied(A, n, mid, sum))
                {
                    x = mid;
                    right = mid - 1;
                }
                else
                {
                    left = mid + 1;
                }
            }
            cout << x << endl;
        }
    }
}