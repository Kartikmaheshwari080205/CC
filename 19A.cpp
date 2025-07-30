#include<bits/stdc++.h>
using namespace std;

struct Team
{
    string name;
    int points = 0;
    int GS = 0;
    int GC = 0;

    int goalDifference() const
    {
        return GS - GC;
    }
};

bool compare(const Team &t1, const Team &t2)
{
    if(t1.points != t2.points)
    {
        return t1.points > t2.points;
    }
    if(t1.goalDifference() != t2.goalDifference())
    {
        return t1.goalDifference() > t2.goalDifference();
    }
    if(t1.GS != t2.GS)
    {
        return t1.GS > t2.GS;
    }
    return t1.name < t2.name;
}

int main()
{
    int n;
    cin >> n;
    vector<Team> teams(n);
    map<string, int> table;
    for(int i=0; i<n; i++)
    {
        cin >> teams[i].name;
        table[teams[i].name] = i;
    }
    for(int i = 0; i < n * (n - 1) / 2; i++)
    {
        string s;
        cin >> s;
        int dash = s.find('-');
        string team1 = s.substr(0, dash);
        string team2 = s.substr(dash + 1);
        string score;
        cin >> score;
        int colon = score.find(':');
        int score1 = stoi(score.substr(0, colon));
        int score2 = stoi(score.substr(colon + 1));
        teams[table[team1]].GS += score1;
        teams[table[team1]].GC += score2;
        teams[table[team2]].GS += score2;
        teams[table[team2]].GC += score1;
        if(score1 > score2)
        {
            teams[table[team1]].points += 3;
        }
        else if (score1 < score2)
        {
            teams[table[team2]].points += 3;
        }
        else
        {
            teams[table[team1]].points += 1;
            teams[table[team2]].points += 1;
        }
    }
    sort(teams.begin(), teams.end(), compare);
    vector<string> result;
    for(int i=0; i < n/2; i++)
    {
        result.push_back(teams[i].name);
    }
    sort(result.begin(), result.end());
    for (const string &team : result)
    {
        cout << team << endl;
    }
}