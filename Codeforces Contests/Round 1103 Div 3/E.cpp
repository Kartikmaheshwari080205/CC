#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        vector<int> A(n + 1);
        for(int i=1; i<=n; i++)
        {
            cin >> A[i];
        }
        const int INF = 1e9;
        vector<vector<int>> exists(n + 2, vector<int>(n + 2, 0));
        vector<vector<int>> minright(n + 2, vector<int>(n + 2, INF));
        vector<vector<int>> maxleft(n + 2, vector<int>(n + 2, 0));
        for(int left=1; left<=n; left++)
        {
            vector<int> frequency(n + 1, 0);
            int minnum = n + 1;
            int maxnum = 0;
            int duplicate = 0;
            for(int right=left; right<=n; right++)
            {
                frequency[A[right]]++;
                if(frequency[A[right]] == 2)
                {
                    duplicate++;
                }
                minnum = min(minnum, A[right]);
                maxnum = max(maxnum, A[right]);
                int length = right - left + 1;
                if(duplicate == 0 && maxnum - minnum + 1 == length)
                {
                    exists[minnum][maxnum] = 1;
                    minright[minnum][maxnum] = min(minright[minnum][maxnum], right);
                    maxleft[minnum][maxnum] = max(maxleft[minnum][maxnum], left);
                }
            }
        }
        int answer = 0;
        for(int length=1; length<=n/2; length++)
        {
            bool flag = false;
            for(int start=1; start + 2 * length - 1 <= n; start++)
            {
                int mid = start + length - 1;
                int end = start + 2 * length - 1;
                if(!exists[start][mid] || !exists[mid + 1][end])
                {
                    continue;
                }
                if(minright[start][mid] < maxleft[mid + 1][end] || minright[mid + 1][end] < maxleft[start][mid])
                {
                    flag = true;
                    break;
                }
            }
            if(flag)
            {
                answer = length;
            }
        }
        cout << answer << endl;
    }
    return 0;
}