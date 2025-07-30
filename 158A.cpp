#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }

    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(A[i] > 0 && A[i] >= A[k-1])
        {
            count++;
        }
    }
    cout << count;
}