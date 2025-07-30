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
        vector<int> A(n);
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
        }

        int gold = 0;
        int count = 0;
        for(int i=0; i<n; i++)
        {
            if(A[i] >= k)
            {
                gold += A[i];
            }
            else if(A[i] == 0)
            {
                if(gold > 0)
                {
                    count++;
                    gold--;
                }
            }
        }
        cout << count << endl;
    }
}