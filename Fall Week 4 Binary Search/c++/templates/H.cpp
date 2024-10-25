#include <bits/stdc++.h>
using namespace std; 

long long n; // note: 10^18 exceeds the capacity of an int, so we must use long long

void solve() {
    // read the input (we declared n globally so the function can use it)
    cin >> n;

    // GOAL: find the largest k such that k*(k-1)/2 <= n
    // We can binary search for this value
    long long lo = 0;
    long long hi = 2e9; // Can you see why using hi = n will cause integer overflows?

    // Handle the remaining cones
    long long ans;

    cout << ans << endl;
}


int main() {
    int cases;
    cin >> cases;
    for(int c = 0; c < cases; c++) {
        solve();
    }
}
