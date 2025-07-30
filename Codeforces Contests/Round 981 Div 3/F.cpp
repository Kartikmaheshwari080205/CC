#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

vector<int> Period(int k)
{
    vector<int> result;
    int a = 0, b = 1;
    result.push_back(a);
    result.push_back(b);
    for(int i=2; i<=k*k; i++)
    {
        int c = (a+b) % MOD;
    }
}

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        long long n;
        int k;
        cin >> n >> k;
        vector<int> A = Period(k);
        int length = A.size();
        long long index = n % length;
        cout << A[index] << endl;
    }
}