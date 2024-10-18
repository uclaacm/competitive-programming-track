#include <bits/stdc++.h>
using namespace std;

void solve() {
    // read the input
    string s;
    cin >> s;

    // Count occurrences of '0' and '1'
    int count0 = 0, count1 = 0;
    for (char c : s) {
        if (c == '0') count0++;
        else count1++;
    }
    
    // The number of characters we can remove is the smaller count
    int ans = min(count0, count1);

    // Edge case: equal number of '0' and '1'
    if(count0 == count1) {
        ans -= 1;
    }

    cout << ans << endl;
}

int main() {
    int cases;
    cin >> cases;
    for (int c = 0; c < cases; c++) {
        solve();
    }
}
