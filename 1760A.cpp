#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        vector<int> A(3);
        cin >> A[0] >> A[1] >> A[2];
        sort(A.begin(), A.end());
        cout << A[1] << endl;
    }
}