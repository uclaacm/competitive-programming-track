#include <bits/stdc++.h>
using namespace std;

void solve() {
    // read the input
    int a, b, c;
    cin >> a >> b >> c;

    int tents = 0;

    // Accommodate introverts
    tents += a; // Each introvert needs their own tent

    // Accommodate extroverts
    int remainder = b%3;
    if(remainder != 0) {
        int need = 3-remainder;
        // Move universals into extroverts to make multiple of 3
        b += need;
        c -= need;
        if(c < 0) {
            cout << -1 << endl;
            return;
        }
    }

    tents += b/3;  // Every 3 extroverts needs a tent

    tents += (c+2)/3; // Need ceil(c/3) more tents for remaining universals

    cout << tents << endl;
}

int main() {
    int cases;
    cin >> cases;
    for (int c = 0; c < cases; c++) {
        solve();
    }
}
