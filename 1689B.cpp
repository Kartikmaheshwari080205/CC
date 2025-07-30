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

        if(n == 1)
        {
            cout << "-1" << endl;
        }
        else
        {
            vector<int> B = A;
            sort(B.begin(), B.end());
            for(int i=0; i<n; i++)
            {
                if(B[i] == A[i])
                {
                    if(i == n-1)
                    {
                        swap(B[i], B[i-1]);
                    }
                    else
                    {
                        swap(B[i], B[i+1]);
                    }
                }
            }
            for(int i=0; i<n; i++)
            {
                cout << B[i] << " ";
            }
            cout << endl;
        }
    }
}