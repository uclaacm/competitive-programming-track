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

    queue<int> w; // maintains the time at which unlocked workstation became available
    int save = 0;
    for(pair<int, int> e: events) {
        if(e.second == 0) {
            // leave event
            // workstation is now available at this time
            w.push(e.first);
            continue;
        }
        while(!w.empty()) {
            // first clear out all the workstations which have autolocked by now
            if(w.front() + m < e.first) w.pop();
            else break;
        }
        if(w.empty()) continue;
        // if there is still one available, use it to save one unlock
        save++;
        w.pop();
    }
    cout << save << '\n';
}

int main()
{
    solve();
}


