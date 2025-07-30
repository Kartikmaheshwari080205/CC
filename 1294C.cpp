#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n;
        cin >> n;
        
        vector<int> A;
        for(int i=2; i*i<=n; i++)
        {
            if(n % i == 0)
            {
                A.push_back(i);
                n /= i;
                break;
            }
        }
        for(int i=2; i*i<=n; i++)
        {
            if(n % i == 0 && i != A[0])
            {
                A.push_back(i);
                n /= i;
                break;
            }
        }
        if(!A.empty() && n > 1 && n != A[0] && (A.size() == 1 || n != A[1]))
        {
            A.push_back(n);
        }
        if(A.size() == 3)
        {
            cout << "YES" << endl;
            cout << A[0] << " " << A[1] << " " << A[2] << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}