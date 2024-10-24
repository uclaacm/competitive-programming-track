#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long n, s;
    cin >> n >> s;
    long long L = 0, R = s+1;
    while (R-L > 1)
    {
        long long m = n/2+1, mid = (L+R)/2;
        if (m*mid <= s)
            L = mid;
        else
            R = mid;
    }
    cout << L << endl;
}

int main()
{
    int cases;
    cin >> cases;
    for (int i=0; i<cases; i++)
        solve();
    return 0;
}
