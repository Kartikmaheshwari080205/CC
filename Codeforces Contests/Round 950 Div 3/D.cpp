#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        int n;
        cin >> n;
        vector<int> A(n);
        for(int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        vector<int> GCD(n - 1);
        for(int i = 0; i < n - 1; i++)
        {
            GCD[i] = gcd(A[i], A[i + 1]);
        }
        bool possible = false;
        for(int i = 0; i < n; i++)
        {
            vector<int> B;
            for(int j = 0; j < n; j++)
            {
                if(j != i)
                {
                    B.push_back(A[j]);
                }
            }
            vector<int> GCD2(B.size() - 1);
            for(int j = 0; j < B.size() - 1; j++)
            {
                GCD2[j] = gcd(B[j], B[j + 1]);
            }
            bool non_decreasing = true;
            for(int j = 0; j < GCD2.size() - 1; j++)
            {
                if(GCD2[j] > GCD2[j + 1])
                {
                    non_decreasing = false;
                    break;
                }
            }
            if(non_decreasing)
            {
                possible = true;
                break;
            }
        }
        if(possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}