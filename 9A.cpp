#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int result = 6 - max(a, b) + 1;
    int div = __gcd(result, 6);
    cout << result/div << "/" << 6/div << endl;
}