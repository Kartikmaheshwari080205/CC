#include<bits/stdc++.h>
using namespace std;

int CalculateFibonacci(int a1, int a2, int a3, int a4, int a5)
{
    int count = 0;
    if(a3 == a1 + a2)
    {
        count++;
    }
    if(a4 == a2 + a3)
    {
        count++;
    }
    if(a5 == a3 + a4)
    {
        count++;
    }
    return count;
}

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        int maximum = 0;
        for(int i = -200; i <= 200; i++)
        {
            maximum = max(maximum, CalculateFibonacci(a1, a2, i, a4, a5));
        }
        cout << maximum << endl;
    }
}