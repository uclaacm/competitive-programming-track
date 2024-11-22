#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <utility>
#include <tuple>
#include <string>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

void solve() {
    // Read constraints
    int k, n;
    cin >> k >> n;

    // Read in Karl's values
    int y, p;
    cin >> y >> p;
    pair<int, int> karl;
    karl = {y,p};

    // Read in all the moose
    vector<pair<int, int>> meese(n+k-1);
    meese[0] = karl;
    for(int i = 1; i < n+k-1; i++) {
        cin >> y >> p;
        meese[i] = {y,p};
    }

    // Sort by year so we can process in chronological order
    sort(begin(meese), end(meese));

    // Finish solving the problem
}

int main()
{
    solve();
}


