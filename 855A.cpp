#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_set<string> A;
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        if(A.find(s) != A.end())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
            A.insert(s);
        }
    }
}