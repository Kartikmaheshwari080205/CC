#include<bits/stdc++.h>
using namespace std;

int Count(vector<int>& nums)
{
    int count = 0;
    int n = nums.size();
    for(int i=0; i<n; i++)
    {
        if(nums[i] == 1 && nums[(i+1)%n] == 5 && nums[(i+2)%n] == 4 && nums[(i+3)%n] == 3)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        int n, m;
        cin >> n >> m;
        char c;
        vector<vector<int>> A(n, vector<int>(m));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> c;
                A[i][j] = c - '0';
            }
        }

        int count = 0;
        for(int layer = 0; layer < min(n, m) / 2; layer++)
        {
            vector<int> nums;
            for(int j = layer; j < m - layer; j++)
            {
                nums.push_back(A[layer][j]);
            }
            for(int i = layer + 1; i < n - layer; i++)
            {
                nums.push_back(A[i][m - layer - 1]);
            }
            if(n - layer - 1 > layer)
            {
                for(int j = m - layer - 2; j >= layer; j--)
                {
                    nums.push_back(A[n - layer - 1][j]);
                }
            }
            if(m - layer - 1 > layer)
            {
                for(int i = n - layer - 2; i > layer; i--)
                {
                    nums.push_back(A[i][layer]);
                }
            }
            count += Count(nums);
        }
        cout << count << endl;
    }
}
