#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<vector<int>> A(n, vector<int> (2));
    for(int i=0; i<n; i++)
    {
        cin >> A[i][0] >> A[i][1];
    }

    for(int i=0; i<n; i++)
    {
        if(A[i][0] > A[i][1])
        {
            swap(A[i][0], A[i][1]);
        }
    }
    int left = A[0][0], right = A[0][1];
    for(int i=1; i<n; i++)
    {
        left = max(left, A[i][0]);
        right = min(right, A[i][1]);
    }
    if(left > right)
    {
        cout << "-1" << endl;
        return 0;
    }
    else
    {
        if(x < left)
        {
            cout << left-x << endl;
        }
        else if(x > right)
        {
            cout << x-right << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
}