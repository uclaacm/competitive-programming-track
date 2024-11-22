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
using namespace std;

void solve() {
    // Build initial line
    list<string> line;
    int n;
    cin >> n;
    for(int i = 0; i < n ; i++) {
        string s;
        cin >> s;
        line.push_back(s);
    }

    // Process all events
    int c;
    cin >> c;
    for(int i = 0; i < c; i++) {
        string event;
        cin >> event;
        if(event == "cut") {
            // a cuts in front of b
            string a, b;
            cin >> a >> b;
            for(auto it = begin(line); it != end(line); ++it) {
                if(*it == b) {
                    line.insert(it, a);
                    break;
                }
            }
        } else {
            // a leaves
            string a;
            cin >> a;
            for(auto it = begin(line); it != end(line); ++it) {
                if(*it == a) {
                    line.erase(it);
                    break;
                }
            }
        }
    }
    // Print out the line
    for(string a: line) {
        cout << a << '\n';
    }
}

int main()
{
    solve();
}

