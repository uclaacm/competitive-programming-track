#include <bits/stdc++.h>
using namespace std;

void solve() {
    // take in input
    int a, b, c;
    cin >> a >> b >> c;

    // apply as many operation 2's as possible
    int min_last_two = min(c / 2, b);
    b -= min_last_two;

    // apply as many operation 1's as possible
    int min_first_two = min(b / 2, a);
    cout << (min_last_two + min_first_two) * 3 << "\n";
}

int main() {
    int cases;
    cin >> cases;
    for (int c = 0; c < cases; c++) {
        solve();
    }
}