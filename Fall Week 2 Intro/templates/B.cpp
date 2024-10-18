#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n, 0); // container for n integers
  for (int i = 0; i < n; i++) {
    cin >> a[i]; // read n integers
  }

  // Your code here

  // Print the output; it should be stored in 'ans'
  cout << ans << '\n';
}
int main() {
  int cases;
  cin >> cases;
  for (int c = 1; c <= cases; c++) {
    solve();
  }
}
