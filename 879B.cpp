#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    vector<int> A(n);
    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }

    if(A[0] == *max_element(A.begin(), A.end()))
    {
        cout << A[0] << endl;
    }
    else
    {
        long count = 0;
        int winner = A[0];
        for(int i=1; i<n; i++)
        {
            if(winner > A[i])
            {
                count++;
            }
            else
            {
                winner = A[i];
                count = 1;
            }
            if(count == k)
            {
                cout << winner << endl;
                break;
            }
            if(A[i] == *max_element(A.begin(), A.end()))
            {
                cout << A[i] << endl;
                break;
            }
        }
    }
}