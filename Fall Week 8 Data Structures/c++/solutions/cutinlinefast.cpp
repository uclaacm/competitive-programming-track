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
    unordered_map<string, list<string>::iterator> locate; // use a map to locate iterators fast
    int n;
    cin >> n;
    for(int i = 0; i < n ; i++) {
        string s;
        cin >> s;
        locate[s] = line.insert(line.end(), s); // insert returns an iterator to the element inserted
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
            locate[a] = line.insert(locate[b], a);
        } else {
            // a leaves
            string a;
            cin >> a;
            line.erase(locate[a]);
            locate.erase(a);
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

