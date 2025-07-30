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

        if(n == 1)
        {
            cout << "0" << endl;
        }
        else
        {
            int count = 0;
            for(int i=0; i<n-1; i++)
            {
                for(int j=i+1; j<n; j++)
                {
                    if((A[i] * A[j]) % ((i+1) * (j+1)) == 0)
                    {
                        count++;
                    }
                }
            }
            cout << count << endl;
        }
    }
}