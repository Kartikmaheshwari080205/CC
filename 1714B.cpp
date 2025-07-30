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

        vector<int> freq(n+1, 0);
        int index = -1;
        for(int i=n-1; i>=0; i--)
        {
            if(freq[A[i]] == 0)
            {
                freq[A[i]]++;
            }
            else
            {
                index = i;
                break;
            }
        }
        cout << index + 1  << endl;
    }
}