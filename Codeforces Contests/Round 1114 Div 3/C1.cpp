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
        string a, b;
        cin >> a >> b;
        int evena = 0, odda = 0, evenb = 0, oddb = 0;
        for(int i=0; i<n; i++)
        {
            if(a[i] == '1')
            {
                if(i % 2 == 0)
                {
                    evena++;
                }
                else
                {
                    odda++;
                }
            }
            if(b[i] == '1')
            {
                if(i % 2 == 0)
                {
                    evenb++;
                }
                else
                {
                    oddb++;
                }
            }
        }
        if(evena == evenb && odda == oddb)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}