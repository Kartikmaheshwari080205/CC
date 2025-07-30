#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> computePrefixFrequencies(const string& s)
{
    int n = s.size();
    vector<vector<int>> prefixFreq(n + 1, vector<int>(26, 0));
    for(int i=0; i<n; i++)
    {
        prefixFreq[i + 1] = prefixFreq[i];
        prefixFreq[i + 1][s[i] - 'a']++;
    }
    return prefixFreq;
}

vector<int> getFrequencyCount(const vector<vector<int>>& prefixFreq, int l, int r)
{
    vector<int> freq(26, 0);
    for(int i=0; i<26; i++)
    {
        freq[i] = prefixFreq[r + 1][i] - prefixFreq[l][i];
    }
    return freq;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    for(int t=0; t<T; t++)
    {
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;
        auto prefixFreqA = computePrefixFrequencies(a);
        auto prefixFreqB = computePrefixFrequencies(b);
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--; r--;
            vector<int> freqA = getFrequencyCount(prefixFreqA, l, r);
            vector<int> freqB = getFrequencyCount(prefixFreqB, l, r);
            int operations = 0;
            for(int i=0; i<26; i++)
            {
                operations += abs(freqA[i] - freqB[i]);
            }
            cout << operations / 2 << endl;
        }
    }
}