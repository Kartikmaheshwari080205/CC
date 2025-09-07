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
        
        long long total = 0;
        for(int l=0; l<n; l++)
        {
            for(int r=l; r<n; r++)
            {
                int count = 0;
                int prefixMax = A[l];
                
                if(B[l] == A[l])
                {
                    count++;
                }
                
                for(int i=l+1; i<=r; i++)
                {
                    if(A[i] > prefixMax)
                    {
                        prefixMax = A[i];
                        if(B[i] == A[i])
                        {
                            count++;
                        }
                    }
                    else
                    {
                        if(B[i] <= prefixMax)
                        {
                            count++;
                        }
                    }
                }
                
                total += count;
            }
        }
        cout << total << endl;
    }
}