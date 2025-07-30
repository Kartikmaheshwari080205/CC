#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long> A(n);
    double total = 0;
    for(int i=0; i<n; i++)
    {
        cin >> A[i];
        total += A[i];
    }

    cout << total/n;
}