#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Node {
    int index;
    int effort;
};

vector<vector<Node>> adj;

int recurse(int cur, int parent) {
    // cost keeps track of the total effort to close off the subtree rooted at cur
    int cost = 0;
    bool no_child = true;
    for(Node child: adj[cur]) {
        // parent is also adjacent, so skip it
        if(child.index == parent) continue;
        // found a child
        no_child = false;

        // update the cost
        cost += ???
    }
    if(no_child) {
        return ???

        // do you see how this is the base case?
    }
    return cost;
}

void solve(int n, int c) {
    adj.clear();
    adj.resize(n+1);
    for(int i = 0; i < n-1; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back(Node{v, w});
        adj[v].push_back(Node{u, w});
    }
    cout << recurse(c, -1) << '\n';
}

int main() {
    int n, c;
    while (cin >> n >> c) {
        solve(n, c);
    }

    return 0;
}

