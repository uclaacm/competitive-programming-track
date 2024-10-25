#include <bits/stdc++.h>
using namespace std;

int main() {
  // read in total number of cases
  int tc;
  cin >> tc;

  while (tc--) {
    // read in number of legs
    int num_legs;
    cin >> num_legs;

    if (num_legs % 4 == 0) {
      cout << num_legs / 4 << endl;
    } else {
      cout << (num_legs + 2) / 4 << endl;
    }
  }
}
