#include<bits/stdc++.h>
using namespace std;

const double twoPI = 6.2831;
const double STEP = 0.0001;
const double EPSILON = 1e-8;

double Evaluatey(double x, vector<int>& A, vector<int>& B)
{
    double y = 0.0;
    for(int i=0; i<A.size(); i++)
    {
        y += sin(A[i] * x + B[i]);
    }
    return y;
}

bool isPeak(double y1, double y2, double y3)
{
    return y2 > y1 + EPSILON && y2 > y3 + EPSILON;
}

int main()
{
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }
    for(int i=0; i<n; i++)
    {
        cin >> B[i];
    }
    vector<double> peaks;
    double prev = Evaluatey(0, A, B);
    double curr = Evaluatey(STEP, A, B);
    for(double x = 2 * STEP; x <= twoPI + EPSILON; x += STEP)
    {
        double next = Evaluatey(x, A, B);
        if(isPeak(prev, curr, next))
        {
            peaks.push_back(x - STEP);
        }
        prev = curr;
        curr = next;
    }
    if(peaks.size() < 2)
    {
        cout << "1" << endl;
    }
    else
    {
        int maxindex = 0;
        double maxwidth = peaks[1] - peaks[0];
        for(int i=1; i + 1 < peaks.size(); i++)
        {
            double width = peaks[i+1] - peaks[i];
            if(width > maxwidth)
            {
                maxwidth = width;
                maxindex = i;
            }
        }
        cout << (maxindex + 1) << endl;
    }
    return 0;
}