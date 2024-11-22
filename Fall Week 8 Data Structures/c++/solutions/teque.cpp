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
            front.push_front(x);
            if (front.size() > back.size() + 1) {
                back.push_front(front.back());
                front.pop_back();
            }
        } else if (cmd == "push_middle") {
            if (front.size() == back.size()) {
                front.push_back(x);
            } else {
                back.push_front(x);
            }
        } else if (cmd == "get") {
            if (x < front.size()) {
                cout << front[x] << endl;
            } else {
                cout << back[x - front.size()] << endl;
            }
        }
    }

    return 0;
}
