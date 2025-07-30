#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n <= 1 || n % 2 == 0)
    {
        return false;
    }
    if(n == 2)
    {
        return true;
    }
    for(int i=3; i <= sqrt(n); i+=2)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    if(isPrime(n-2))
    {
        cout << "2 " << n-2 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}