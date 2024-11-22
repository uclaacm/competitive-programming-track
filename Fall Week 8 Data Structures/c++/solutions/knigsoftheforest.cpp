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

    // Use a priority queue to quickly figure out the strongest moose
    priority_queue<int> strength;
    for(int i = 0; i < k; i++) {
        // first k moose all start in the first year
        assert(meese[i].first == 2011);
        // push all of their strengths into queue
        strength.push(meese[i].second);
    }
    for(int i = 0; i < n; i++) {
        // get strength of strongest moose
        int winner = strength.top(); strength.pop();
        // strengths are unique, so we may check if it is Karl
        if(winner == karl.second) {
            cout << 2011+i << endl;
            return;
        }
        if(i < n-1) {
            // we get one moose per year
            assert(meese[i+k].first == 2012+i);
            strength.push(meese[i+k].second);
        }
    }
    cout << "unknown" << endl;
}

int main()
{
    solve();
}


