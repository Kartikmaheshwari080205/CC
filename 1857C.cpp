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
        vector<int> B(n*(n-1)/2);
        for(int i=0; i < B.size(); i++)
        {
            cin >> B[i];
        }

        sort(B.begin(), B.end());
        int i=0, j=0;
        while(i < B.size())
        {
            cout << B[i] << " ";
            i += (n-j-1);
            j++;
        }
        cout << B[B.size() - 1] << endl; 
    }
}