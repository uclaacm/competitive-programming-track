#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2e5+5;

int result[MAXN];

// Find the minimum number of beautiful substrings for each k
void solve(const string& s)
{
    int n = s.size();

    // your code here
}

int main()
{
    // read the input
    string s;
    cin >> s;

    // find the minimum partitions for each k
    solve(s);

    for (int k = 1; k <= s.size(); k++)
        cout << result[k - 1] << " ";
    
    cout << endl;

    return 0;
}
