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

        int sum = 0;
        bool flag = true;
        for(int i=0; i<n; i++)
        {
            if(flag)
            {
                sum += A[i];
                flag = false;
            }
            else
            {
                sum -= A[i];
                flag = true;
            }
        }
        cout << sum << endl;
    }
}