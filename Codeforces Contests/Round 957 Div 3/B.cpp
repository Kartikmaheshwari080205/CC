#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n, k;
        cin >> n >> k;
        vector<int> A(k);
        for(int i=0; i<k; i++)
        {
            cin >> A[i];
        }

        sort(A.begin(), A.end());
        int count = 0;
        for(int i=0; i<k-1; i++)
        {
            if(A[i] != 1)
            {
                count += (A[i] - 1) * 2 + 1;
            }
            else if(A[i] == 1)
            {
                count++;
            }
        }

        cout << count << endl;
    }
}