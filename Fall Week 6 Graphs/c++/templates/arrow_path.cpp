#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // read the input
    int n;
    cin >> n;
    vector<vector<char>> a(2, vector<char>(n));
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    // check the condition
    bool flag = true;

    
    // output the result
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    // read number of test cases
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
    return 0;
}
