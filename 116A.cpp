#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    for(int i=0; i<n; i++)
    {
        cin >> A[i] >> B[i];
    }

    int capacity = 0;
    int inTram = 0;
    for(int i=0; i<n; i++)
    {
        inTram = inTram - A[i] + B[i];
        capacity = max(capacity, inTram);
    }
    cout << capacity;
}