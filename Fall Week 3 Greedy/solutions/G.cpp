#include <bits/stdc++.h>
using namespace std;

void solve() {

    // read in input
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++)cin >> arr[i];

    for(int i = 0; i < n-1; i++){
        // apply as many operations as we can to leftmost element to make it 0
        int num_ops = min(k, arr[i]);

        // do operations
        arr[i] -= num_ops;
        arr[n-1] += num_ops;
        k -= num_ops;
    }

    // print array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int cases;
    cin >> cases;
    for (int c = 0; c < cases; c++) {
        solve();
    }
}