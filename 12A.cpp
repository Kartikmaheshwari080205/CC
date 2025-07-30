#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> A(9);
    for(int i=0; i<9; i++)
    {
        cin >> A[i];
    }
    for(int i=0; i<4; i++)
    {
        if(A[i] != A[8-i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}