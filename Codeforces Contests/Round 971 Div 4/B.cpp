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
        vector<string> A(n);
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
        }

        for(int i=n-1; i>=0; i--)
        {
            for(int j=0; j<4; j++)
            {
                if(A[i][j] == '#')
                {
                    cout << j+1 << " ";
                    break;
                }
            }
        }
        cout << endl;
    }
}