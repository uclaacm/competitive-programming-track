#include <bits/stdc++.h>
using namespace std;

/*
 * It's always optimal to take either all of the even-indexed elements or all of
 * the odd-indexed elements; This maximizes the count for every possible maximum
 * value.
 */
void solve() {
  int n;
  cin >> n;
  vector<int> a(n, 0); // container for n integers
  for (int i = 0; i < n; i++) {
    cin >> a[i]; // read n integers
  }
  int ans = 0;
  int max_val = 0, count = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      count++;
      max_val = max(max_val, a[i]);
    }
  }
  if (count + max_val > ans) {
    ans = count + max_val;
  }
  // Make sure to reset the variables when trying again!
  max_val = 0;
  count = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 1) {
      count++;
      max_val = max(max_val, a[i]);
    }
  }
  if (count + max_val > ans) {
    ans = count + max_val;
  }

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
