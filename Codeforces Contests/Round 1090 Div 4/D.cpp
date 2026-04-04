#include<bits/stdc++.h>
using namespace std;

vector<int> Sieve(int n)
{
    int size = 200000;
    vector<bool> prime(size, true);
    prime[0] = prime[1] = false;
    vector<int> result;
    for(int i=2; i<size; i++)
    {
        if(prime[i])
        {
            result.push_back(i);
            if(result.size() == n+1)
            {
                break;
            }
            for(int j=i*2; j<size; j+=i)
            {
                prime[j] = false;
            }
        }
    }
    return result;
}

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n;
        cin >> n;
        vector<int> primes = Sieve(n);
        for(int i=0; i<n; i++)
        {
            cout << (long long)primes[i] * primes[i+1] << " ";
        }
        cout << endl;
    }
}