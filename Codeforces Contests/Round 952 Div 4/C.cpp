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
        vector<long long> A(n);
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
        }

        int count = 0;
        long long sum = 0;
        long long max_element = LLONG_MIN;
        for(int i=0; i<n; i++)
        {
            sum += A[i];
            max_element = max(max_element, A[i]);
            if(sum - max_element == max_element)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}