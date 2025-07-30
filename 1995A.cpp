#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n, k;
        cin >> n >> k;
        vector<int> A;
        for(int i=0; i<n-1; i++)
        {
            A.push_back(i+1);
            A.push_back(i+1);
        }
        A.push_back(n);
        int count = 0;
        int i = 2*n - 2;
        while(k > 0 && i >= 0)
        {
            if(A[i] <= k)
            {
                k -= A[i];
            }
            else
            {
                k = 0;
            }
            i--;
            count++;
        }
        cout << count << endl;
    }
}