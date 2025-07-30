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
        int combinations = 0;
        if(n <= 2)
        {
            combinations = 0;
        }
        else
        {
            combinations = (n-1) / 2;
        }
        cout << combinations << endl;
    }
}