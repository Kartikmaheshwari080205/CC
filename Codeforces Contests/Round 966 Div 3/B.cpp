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
        }
        vector<bool> visited(n, false);
        visited[A[0]-1] = true;
        bool flag = 1;
        for(int i=1; i<n; i++)
        {
            visited[A[i]-1] = true;
            if(!((A[i] > 1 && visited[A[i] - 2]) || (A[i] < n && visited[A[i]])))
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