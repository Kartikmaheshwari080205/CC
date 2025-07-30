#include<bits/stdc++.h>
using namespace std;

struct TrieNode{
    unordered_map<char, TrieNode*> children;
};

class Trie{
    public:
    TrieNode* root;
    
    Trie()
    {
        root = new TrieNode();
    }
    
    void insert(const string& s)
    {
        TrieNode* node = root;
        for(char c : s)
        {
            if(!node->children.count(c))
            {
                node->children[c] = new TrieNode();
            }
            node = node->children[c];
        }
    }
    
    vector<int> GetMatches(const string& s, int index)
    {
        vector<int> result;
        TrieNode* node = root;
        for(int i = index; i < s.size(); i++)
        {
            if(!node->children.count(s[i]))
            {
                break;
            }
            node = node->children[s[i]];
            result.push_back(i+1);
        }
        return result;
    }
};

struct State{
    int pos;
    int substrings;
    int costy;
    int costrev;
    int factor;
    
    bool operator>(const State& other) const
    {
        if(substrings != other.substrings)
        {
            return substrings > other.substrings;
        }
        return factor > other.factor;
    }
};

int Solve(const string& x, const string& y, int s, int r)
{
    Trie triey, trierevy;
    int lenx = x.size();
    for(int i=0; i<y.size(); i++)
    {
        triey.insert(y.substr(i));
    }
    string revy = y;
    reverse(revy.begin(), revy.end());
    for(int i=0; i<revy.size(); i++)
    {
        trierevy.insert(revy.substr(i));
    }
    priority_queue<State, vector<State>, greater<State>> pq;
    pq.push({0, 0, 0, 0, 0});
    vector<int> visited(lenx + 1, INT_MAX);
    while(!pq.empty())
    {
        State current = pq.top();
        pq.pop();
        int pos = current.pos;
        int substrings = current.substrings;
        int costy = current.costy;
        int costrev = current.costrev;
        int factor = current.factor;
        if(pos == lenx)
        {
            return factor;
        }
        if(visited[pos] <= substrings)
        {
            continue;
        }
        visited[pos] = substrings;
        for(int nextPos : triey.GetMatches(x, pos))
        {
            int newsub = substrings + 1;
            int newcosty = costy + 1;
            int newfactor = newcosty * s + costrev * r;
            pq.push({nextPos, newsub, newcosty, costrev, newfactor});
        }
        for(int nextPos : trierevy.GetMatches(x, pos))
        {
            int newsub = substrings + 1;
            int newcostrev = costrev + 1;
            int newfactor = costy * s + newcostrev * r;
            pq.push({nextPos, newsub, costy, newcostrev, newfactor});
        }
    }
    
    return -1;
}

int main()
{
    string x, y;
    int s, r;
    cin >> x >> y;
    cin >> s >> r;
    int result = Solve(x, y, s, r);
    if(result == -1)
    {
        cout << "Impossible" << endl;
    }
    else
    {
        cout << result << endl;
    }
    return 0;
}