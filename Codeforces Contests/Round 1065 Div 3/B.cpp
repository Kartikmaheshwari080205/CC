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
            if(A[i] == -1 && i != 0 && i != n-1)
            {
                A[i] = 0;
            }
        }
        bool first = (A[0] == -1);
        bool last = (A[n-1] == -1);
        if((first && last))
        {
            A[0] = 0;
            A[n-1] = 0;
            cout << 0 << endl;
            for(int i=0; i<n; i++)
            {
                cout << A[i] << " ";
            }
            cout << endl;
        }
        else if(first || last)
        {
            if(first)
            {
                A[0] = A[n-1];
            }
            else
            {
                A[n-1] = A[0];
            }
            int result = 0;
            for(int i=0; i<n-1; i++)
            {
                result += (A[i+1] - A[i]);
            }
            cout << abs(result) << endl;
            for(int i=0; i<n; i++)
            {
                cout << A[i] << " ";
            }
            cout << endl;
        }
        else
        {
            int result = 0;
            for(int i=0; i<n-1; i++)
            {
                result += (A[i+1] - A[i]);
            }
            cout << abs(result) << endl;
            for(int i=0; i<n; i++)
            {
                cout << A[i] << " ";
            }
            cout << endl;
        }
    }
}