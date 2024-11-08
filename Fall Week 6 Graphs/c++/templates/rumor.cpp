#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int> > graph(n);
    vector<int> cost(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> cost[i];
    }

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a -= 1;
        b -= 1;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector<bool> visited(n, false);
    long long total_cost = 0;
    for (int i = 0; i < n; i++) {
        if (visited[i]) {
            continue;
        }
        // Your BFS code here
    }

    cout << total_cost << endl;
}
