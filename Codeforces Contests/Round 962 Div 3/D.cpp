#include <bits/stdc++.h>
using namespace std;

int countTriplets(int n, int x)
{
    int count = 0;
    for(int a=1; a <= x-2; a++)
    {
        for(int b=1; b <= min(x-a-1, n/a); b++)
        {
            int maxC = min(x-a-b, (n - a*b) / (a+b));
            if(maxC > 0)
            {
                count = (count + maxC);
            }
        }
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n, x;
        cin >> n >> x;
        cout << countTriplets(n, x) << '\n';
    }
}