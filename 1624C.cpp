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

        set<int> freq;
        for(int i=1; i<n+1; i++)
        {
            freq.insert(i);
        }
        for(int i=0; i<n; i++)
        {
            int x = A[i];
            while(x > 0)
            {
                if(freq.count(x))
                {
                    freq.erase(x);
                    break;
                }
                x /= 2;
            }
        }
        if(freq.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}