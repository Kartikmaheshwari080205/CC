#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }

    deque<int> result;
    unordered_set<int> screen;
    for(int i=0; i<n; i++)
    {
        if(screen.find(A[i]) == screen.end())
        {
            if(result.size() == k)
            {
                int removed_id = result.back();
                result.pop_back();
                screen.erase(removed_id);
            }
            result.push_front(A[i]);
            screen.insert(A[i]);
        }
    }
    cout << result.size() << endl;
    for(int id : result)
    {
        cout << id << " ";
    }
    cout << endl;
    return 0;
}