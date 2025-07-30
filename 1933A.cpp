#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> Solution(t);
    for(int i=0; i<t; i++)
    {
        int n;
        cin >> n;
        vector<int> A(n);
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
            sum += abs(A[i]);
        }
        cout << sum << endl;
    }
}