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
        string s;
        cin >> s;

        vector<int> A(26, 0);
        int balloons = 0;
        for(int i=0; i<n; i++)
        {
            if(A[s[i] - 'A'] == 0)
            {
                A[s[i] - 'A']++;
                balloons += 2;
            }
            else
            {
                A[s[i] - 'A']++;
                balloons++;
            }
        }
        cout << balloons << endl;
    }
}