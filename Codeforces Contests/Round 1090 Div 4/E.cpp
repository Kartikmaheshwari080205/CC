#include <bits/stdc++.h>
using namespace std;

struct Trie {
    int ch[2];
    Trie() { ch[0] = ch[1] = -1; }
};

vector<Trie> trie;

void insert(int x){
    int node = 0;
    for(int bit=31; bit>=0; bit--)
    {
        int b = (x >> bit) & 1;
        if(trie[node].ch[b] == -1)
        {
            trie[node].ch[b] = trie.size();
            trie.push_back(Trie());
        }
        node = trie[node].ch[b];
    }
}

int queryMax(int x)
{
    int node = 0, result = 0;
    for(int bit=31; bit>=0; bit--)
    {
        int want = 1 - ((x >> bit) & 1);
        if(trie[node].ch[want] != -1)
        {
            result |= (1 << bit);
            node = trie[node].ch[want];
        }
        else
        {
            node = trie[node].ch[1 - want];
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
        vector<int> A(n);
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
        }
        trie.clear();
        trie.push_back(Trie());
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            if(i > 0)
            {
                ans = max(ans, queryMax(A[i]));
            }
            insert(A[i]);
        }        
        cout << ans << endl;
    }
    return 0;
}