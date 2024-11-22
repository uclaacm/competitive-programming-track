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
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    // events hold all the times where someone arrives or leaves
    // the second component is a 1 if someone arrived and 0 if someone left
    // it is important that the arrival is a larger number so the sort is correct
    vector<pair<int, int>> events;
    for(int i = 0; i < n; i++) {
        int a, s;
        cin >> a >> s;
        events.push_back({a,1}); // give arrive lower priority
        events.push_back({a+s,0}); // give leave higher priority
    }
    sort(begin(events), end(events));
    /*
        We have now transformed the problem so that the input comes in chronological order of events
        The events will contain time as the first value and whether it's an arrival or leave for the second
        If a leave and arrive happen at the same time, the leave will happen first
    */

    // Finish the problem
}

int main()
{
    solve();
}


