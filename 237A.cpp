#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i=0; i<n; i++)
    {
        int a, b;
        cin >> a >> b;
        A[i] = a * 100 + b;
    }

    int maxfreq = 1;
    int currentfreq = 1;
    for(int i=1; i<n; i++)
    {
        if(A[i] == A[i-1])
        {
            currentfreq++;
        }
        else
        {
            maxfreq = max(maxfreq, currentfreq);
            currentfreq = 1;
        }
    }
    maxfreq = max(maxfreq, currentfreq);
    cout << maxfreq << endl;
}