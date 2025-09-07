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
        vector<int> B(n);
        for(int i=0; i<n; i++)
        {
            cin >> B[i];
        }
        unordered_map<int, vector<int>> groups;
        for(int i=0; i<n; i++)
        {
            groups[B[i]].push_back(i);
        }
        bool flag = true;
        vector<int> A(n, -1);
        int id = 1;
        for(auto& group : groups)
        {
            int k = group.first;
            auto& indices = group.second;
            if(indices.size() % k != 0)
            {
                flag = false;
                break;
            }
            for(int i=0; i<indices.size(); i+=k)
            {
                for(int j=0; j<k; j++)
                {
                    A[indices[i+j]] = id;
                }
                id++;
            }
        }
        if(!flag)
        {
            cout << -1 << endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                cout << A[i] << " ";
            }
            cout << endl;
        }
    }
}