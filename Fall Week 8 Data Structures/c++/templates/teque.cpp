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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    deque<int> front, back;
    for (int i = 0; i < n; i++) {
        string cmd;
        cin >> cmd;

        int x;
        cin >> x;
        if (cmd == "push_back") {
            back.push_back(x);
            if (back.size() > front.size()) {
                front.push_back(back.front());
                back.pop_front();
            }
        } else if (cmd == "push_front") {
            // implement push_front
        } else if (cmd == "push_middle") {
            // implement push_middle
        } else if (cmd == "get") {
            // implement get
        }
    }

    return 0;
}
