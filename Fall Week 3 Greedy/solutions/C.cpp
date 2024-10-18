#include <bits/stdc++.h>
using namespace std;

void solve() {
    // read the input
    int n;
    cin >> n;
    vector<int> programming, math, pe;

    // Store indices of children based on their skill type
    for (int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        if (t == 1) programming.push_back(i);
        else if (t == 2) math.push_back(i);
        else pe.push_back(i);
    }

    // Find the maximum number of teams
    int w = min({(int)programming.size(), (int)math.size(), (int)pe.size()});
    cout << w << endl;

    // Form teams
    for (int i = 0; i < w; i++) {
        cout << programming[i] << " " << math[i] << " " << pe[i] << endl;
    }
}

int main() {
    solve();
}
