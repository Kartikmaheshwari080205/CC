#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n, m;
        cin >> n >> m;
        string A;
        cin >> A;
        vector<int> frequency(7, 0);
        for(int i=0; i<n; i++)
        {
            frequency[A[i] - 'A']++;
        }
        int count = 0;
        for(int i=0; i<7; i++)
        {
            if(frequency[i] <  m)
            {
                count += (m - frequency[i]);
            }
        }
        cout << count << endl;
    }
}