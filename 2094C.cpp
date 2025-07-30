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
        vector<vector<int>> A(n, vector<int>(n));
        unordered_set<int> set;
        for(int i=1; i <= 2*n; i++)
        {
            set.insert(i);
        }
        vector<int> P(2*n + 1, -1);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin >> A[i][j];
                set.erase(A[i][j]);
                int diagonal = i + j + 2;
                if(P[diagonal] == -1)
                {
                    P[diagonal] = A[i][j];
                }
            }
        }
        unordered_set<int>::iterator it = set.begin();
        int remaining = *it;
        P[1] = remaining;
        for(int i=1; i <= 2*n; i++)
        {
            cout << P[i] << " ";
        }
        cout << endl;
    }
}