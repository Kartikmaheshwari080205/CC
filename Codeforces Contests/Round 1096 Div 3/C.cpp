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
        vector<int> twoes, threes, sixes, temp, result;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            if(a % 6 == 0)
            {
                sixes.push_back(a);
            }
            else if(a % 2 == 0)
            {
                twoes.push_back(a);
            }
            else if(a % 3 == 0)
            {
                threes.push_back(a);
            }
            else
            {
                temp.push_back(a);
            }
        }
        int two = twoes.size(), three = threes.size();
        bool flag = false;
        if(two < three)
        {
            flag = true;
            for(int s : sixes)
            {
                result.push_back(s);
            }
        }
        for(int t : twoes)
        {
            result.push_back(t);
        }
        for(int t : temp)
        {
            result.push_back(t);
        }
        for(int t : threes)
        {
            result.push_back(t);
        }
        if(!flag)
        {
            for(int s : sixes)
            {
                result.push_back(s);
            }
        }
        for(int r : result)
        {
            cout << r << " ";
        }
        cout << endl;
    }
}