#include<bits/stdc++.h>
using namespace std;

int PlayOptimal(vector<int>& A, int k)
{
    if(A.size() == 1)
    {
        return A[0];
    }
    bool flag = (A.size() % 2 == k % 2);
    int bestresult = flag ? INT_MIN : INT_MAX;
    for(int i=0; i < A.size(); i++)
    {
        for(int j=i+1; j < A.size(); j++)
        {
            int newnum = ((A[i] + A[j]) / 2) * 2;
            vector<int> newnums;
            for(int k=0; k < A.size(); k++)
            {
                if(k != i && k != j)
                {
                    newnums.push_back(A[k]);
                }
            }
            newnums.push_back(newnum);
            int result = PlayOptimal(newnums, k);
            if(flag)
            {
                bestresult = max(bestresult, result);
            }
            else
            {
                bestresult = min(bestresult, result);
            }
        }
    }
    return bestresult;
}

vector<int> Game(vector<int>& A)
{
    int n = A.size();
    vector<int> result;
    for(int k=1; k<=n; k++)
    {
        vector<int> prefix(A.begin(), A.begin() + k);
        result.push_back(PlayOptimal(prefix, k));
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

        vector<int> result = Game(A);
        for(int i=0; i<n; i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }
}