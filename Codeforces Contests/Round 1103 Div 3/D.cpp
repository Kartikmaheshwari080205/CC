#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n, k;
        cin >> n >> k;
        vector<int> A(n);
        map<int, int> count;
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
            count[A[i]]++;
        }
        vector<int> val;
        vector<int> frequency;
        for (auto cnt : count)
        {
            int x = cnt.first, c = cnt.second;
            val.push_back(x);
            frequency.push_back(c);
        }
        int m = val.size();
        vector<int> lose(m);
        for(int i=m-1; i>=0; i--)
        {
            bool last = (i == m-1) || (val[i+1] - val[i] > k);
            if(last)
            {
                lose[i] = frequency[i] & 1;
            }
            else
            {
                if((frequency[i] & 1) == 0)
                {
                    lose[i] = 0;
                }
                else
                {
                    lose[i] = !lose[i + 1];
                }
            }
        }
        bool flag = false;
        for(int x : lose)
        {
            if(!x)
            {
                flag = true;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
}