#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        vector<char> A(6);
        for(int i=0; i<6; i++)
        {
            cin >> A[i];
        }

        cout << A[3] << A[1] << A[2] << " " << A[0] << A[4] << A[5] << endl;
    }
}