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
    
    int ans = min(count0, count1);
    // Your code here

    cout << ans << endl;
}

int main() {
    int cases;
    cin >> cases;
    for (int c = 0; c < cases; c++) {
        solve();
    }
}
