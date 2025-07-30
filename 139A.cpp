#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> A(7);
    for(int i=0; i<7; i++)
    {
        cin >> A[i];
    }

    int sum = 0;
    for(int i=0; i<7; i++)
    {
        sum += A[i];
    }
    n %= sum;
    if(n == 0)
    {
        for(int i=6; i>=0; i--)
        {
            if(A[i] > 0)
            {
                cout << i+1 << endl;
                break;
            }
        }
    }
    else
    {
        int i=0;
        while(n > 0)
        {
            n -= A[i++];
        }
        cout << i << endl;
    }
}