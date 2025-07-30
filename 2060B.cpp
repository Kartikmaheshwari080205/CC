#include<bits/stdc++.h>
using namespace std;

bool compare(const pair<int, vector<int>>& a, const pair<int, vector<int>>& b)
{
    return a.second[0] < b.second[0];
}

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n, m;
        cin >> n >> m;
        vector<pair<int, vector<int>>> A(n);
        for(int i=0; i<n; i++)
        {
            A[i].first = i+1;
            A[i].second.resize(m);
            for(int j=0; j<m; j++)
            {
                cin >> A[i].second[j];
            }
            sort(A[i].second.begin(), A[i].second.end());
        }
        sort(A.begin(), A.end(), compare);

        bool flag = true;
        int last = -1;
        for(int k=0; k<m && flag; k++)
        {
            for(int i=0; i<n; i++)
            {
                auto& deck = A[i].second;
                if(deck.empty() || deck[0] <= last)
                {
                    flag = false;
                    break;
                }
                last = deck[0];
                deck.erase(deck.begin());
            }
        }
        if(flag)
        {
            for(const auto& a : A)
            {
                cout << a.first << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}