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
        for(int i=0; i<n; i++)
        {
            cin >> B[i];
            frequency[B[i]]++;
        }
        vector<long long> shadow;
        for(auto& freq : frequency)
        {
            shadow.push_back(freq.first);
        }
        if(shadow[0] != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            map<long long, long long> A;
            bool flag = true;
            long long prev = 0;
            for(int i=0; i<shadow.size(); i++)
            {
                if(i == shadow.size() - 1)
                {
                    A[shadow[i]] = max(1LL, prev + 1);
                }
                else
                {
                    long long diff = shadow[i+1] - shadow[i];
                    int count = frequency[shadow[i]];
                    if(diff <= 0 || diff % count != 0)
                    {
                        flag = false;
                        break;
                    }
                    long long f = diff / count;
                    if(f <= prev || f <= 0)
                    {
                        flag = false;
                        break;
                    }
                    A[shadow[i]] = f;
                    prev = f;
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
                    cout << A[B[i]] << " ";
                }
                cout << endl;
            }
        }
    }
}