#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int l, r, L, R;
        cin >> l >> r >> L >> R;
        int left = max(l, L), right = min(r, R);
        int count = right - left + 1;
        if(count <= 0)
        {
            cout << "1" << endl;
        }
        else
        {
            count--;
            if(left > l || left > L)
            {
                count++;
            }
            if(right < r || right < R)
            {
                count++;
            }
            cout << count << endl;
        }
    }
}