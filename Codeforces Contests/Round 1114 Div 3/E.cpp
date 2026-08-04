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
        vector<long long> B(n);
        map<long long, int> frequency;
        long long start = LLONG_MAX;
        for(int i=0; i<n; i++)
        {
            cin >> B[i];
            frequency[B[i]]++;
            if(B[i] > 0)
            {
                start = min(start, B[i]);
            }
        }
        if(start == LLONG_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            if(--frequency[start] == 0)
            {
                frequency.erase(start);
            }
            vector<long long> A;
            A.push_back(start);
            bool flag = true;
            for(int i=1; i<n; i++)
            {
                long long need = 1 - start;
                auto it = frequency.lower_bound(need);
                if(it == frequency.end())
                {
                    flag = false;
                    break;
                }
                start += it->first;
                A.push_back(start);
                if(--it->second == 0)
                {
                    frequency.erase(it);
                }
            }
            if(!flag)
            {
                cout << -1 << endl;
            }
            else
            {
                for(long long a : A)
                {
                    cout << a << " ";
                }
                cout << endl;
            }
        }
    }
}