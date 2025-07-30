#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> A(n), B(m);
    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }
    for(int i=0; i<m; i++)
    {
        cin >> B[i];
    }
    int q;
    cin >> q;
    for(int i=0; i<q; i++)
    {
        int index;
        cin >> index;
        index--;
        cout << A[index % n] + B[index % m] << endl;
    }
}