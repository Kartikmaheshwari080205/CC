#include<bits/stdc++.h>
using namespace std;

int MinimumOperations(int left, int right, vector<int>& A, vector<vector<int>>& dp)
{
    if(left > right)
    {
        return 0;
    }
    if(left == right)
    {
        return 1;
    }
    if(dp[left][right] != -1)
    {
        return dp[left][right];
    }
    int result = 1 + MinimumOperations(left + 1, right, A, dp);
    for(int i=left+1; i<=right; i++)
    {
        if(A[left] == A[i])
        {
            result = min(result, MinimumOperations(left+1, i-1, A, dp) + MinimumOperations(i+1, right, A, dp));
        }
    }
    return dp[left][right] = result;
}

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }
    vector<vector<int>> dp(n, vector<int>(n, -1));
    cout << MinimumOperations(0, n-1, A, dp) << endl;
}