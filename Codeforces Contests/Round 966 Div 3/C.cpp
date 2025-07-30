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
        vector<int> A(n);
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
        }
        int m;
        cin >> m;
        vector<string> B(m);
        for(int i=0; i<m; i++)
        {
            cin >> B[i];
            if(B[i].size() != n)
            {
                cout << "NO" << endl;
                continue;
            }
            unordered_map<char, int> charToNum;
            unordered_map<int, char> numToChar;
            bool flag = true;
            for(int j=0; j<n; j++)
            {
                char c = B[i][j];
                int num = A[j];
                if(charToNum.find(c) == charToNum.end())
                {
                    charToNum[c] = num;
                }
                else if(charToNum[c] != num)
                {
                    flag = false;
                    break;
                }
                if(numToChar.find(num) == numToChar.end())
                {
                    numToChar[num] = c;
                }
                else if(numToChar[num] != c)
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}