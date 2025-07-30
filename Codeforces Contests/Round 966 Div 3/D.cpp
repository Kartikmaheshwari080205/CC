#include <bits/stdc++.h>
using namespace std;

long long calculateMaxScore(int n, const vector<int>& a, const string& s)
{
    long long total = 0;
    vector<long long> prefixSum(n+1, 0);
    for(int i=0; i<n; i++)
    {
        prefixSum[i + 1] = prefixSum[i] + a[i];
    }
    int l = 0, r = n-1;
    while(l < r)
    {
        while(l < n && s[l] != 'L')
        {
            l++;
        }
        while(r >= 0 && s[r] != 'R')
        {
            r--;
        }
        if(l < r)
        {
            total += prefixSum[r + 1] - prefixSum[l];
            l++;
            r--;
        }
        else
        {
            break;
        }
    }
    return total;
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
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
        }
        string s;
        cin >> s;
        cout << calculateMaxScore(n, A, s) << endl;
    }
}