#include <bits/stdc++.h>
using namespace std;

void solve() {

    // read in input
    int n, p;
    cin >> n >> p;

    // make pair for sorting purposes
    pair<int, int> a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].second;
    }
    for(int i = 0; i < n; i++){
        cin >> a[i].first;
    }

    // sort the array
    sort(a, a+n);

    // store variables for number of money spent, and last person sent message
    long long ans = p;
    int total_recruits = 1;
    for (int i = 0; i < n; i++){
        // skip if we found everyone
        if (total_recruits >= n) continue;

        // recruit as many people as we can
        long long num_recruits = min(n-total_recruits, a[i].second);
        total_recruits += a[i].second;

        // accumulate total cost
        ans += num_recruits * min(a[i].first, p);
    }
    cout << ans << "\n";
}

int main() {
    int cases;
    cin >> cases;
    for (int c = 0; c < cases; c++) {
        solve();
    }
}