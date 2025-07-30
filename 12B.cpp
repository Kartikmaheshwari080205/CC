#include<bits/stdc++.h>
using namespace std;

int main()
{
    string A, B;
    cin >> A >> B;

    sort(A.begin(), A.end());
    if(A[0] == '0')
    {
        for(int i=0; i < A.size(); i++)
        {
            if(A[i] != '0')
            {
                swap(A[i], A[0]);
                break;
            }
        }
    }
    bool flag = true;
    for(int i=0; i < A.size() || i < B.size(); i++)
    {
        if(A[i] != B[i])
        {
            flag = false;
        }
    }
    if(flag)
    {
        cout << "OK" << endl;
    }
    else
    {
        cout << "WRONG_ANSWER" << endl;
    }
}