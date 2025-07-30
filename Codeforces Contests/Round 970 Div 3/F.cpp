#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

long ModInverse(long n)
{
    long result = 1;
    long exponent = MOD - 2; //Fermat's Little Theorem
    while(exponent > 0)
    {
        if(exponent % 2 == 1)
        {
            result = (result * n) % MOD;
        }
        n = (n * n) % MOD;
        exponent /= 2;
    }
    return result;
}

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n;
        cin >> n;
        vector<int> A(n);
        long long sum = 0, sumOfSquares = 0;
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
            sum = (sum + A[i]) % MOD;
            sumOfSquares = (sumOfSquares + A[i] * A[i]) % MOD;
        }
        long long P = (sum * sum - sumOfSquares + MOD) % MOD;
        P = (P * ModInverse(2)) % MOD;
        long long Q = (n * (n - 1) / 2) % MOD;
        long long Q_inv = ModInverse(Q);
        cout << (P * Q_inv) % MOD << endl;
    }
}