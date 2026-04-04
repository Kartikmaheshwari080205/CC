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
        for(int i=1; i<=n; i++)
        {
            cout << i << " " << (3*n - 2*i + 1) << " " << (3*n - 2*i + 2) << " ";
        }
        cout << endl;
    }
}