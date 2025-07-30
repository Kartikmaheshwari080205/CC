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
        string A;
        cin >> A;

        string B = A;
        sort(B.begin(), B.end());
        bool flag = true;
        for(int i=0; i<n; i++)
        {
            if(A[i] != B[i])
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}