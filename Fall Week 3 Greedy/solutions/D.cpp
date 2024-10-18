#include <bits/stdc++.h>
using namespace std;

void solve() {
    // read the input
    int n;
    cin >> n;

    // Denominations
    vector<int> bills = {100, 20, 10, 5, 1};
    int count = 0;

    for (int bill : bills) {
        count += n / bill;  // Add the number of bills of this denomination
        n %= bill;          // Update remaining amount
    }

    cout << count << endl;
}

int main() {
    solve();
}
