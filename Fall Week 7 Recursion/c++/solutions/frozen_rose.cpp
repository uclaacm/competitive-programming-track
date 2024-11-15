#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 1e9;

int n, r;

vector<vector<pair<int, int> > > g; 
vector<vector<int>> tree;
vector<int> deg, nt, cost;

void dfs(int u, int p) {
    for (int i = 0; i < g[u].size(); ++i) {
        int v = g[u][i].first;
        if (v != p) {
            tree[u].push_back(v); 
            deg[v]++;
            dfs(v, u);
        }
    }
}

int main() {

    while (cin >> n >> r) {

        g.assign(n, vector<pair<int, int> >());
        tree.assign(n, vector<int>());
        nt.clear();
        deg.assign(n, 0);
        cost.assign(n, MAXN);

        r --;

        for (int i = 0; i < n - 1; i++) {
            int a, b, w;
            cin >> a >> b >> w;
            a--, b--;
            g[a].push_back({b, w});
            g[b].push_back({a, w});
        }

        dfs(r, -1);

        vector<int> q;
        for (int i = 0; i < n; i++) {
            if (deg[i] == 0) {
                q.push_back(i);
            }
        }

        for (int i = 0; i < q.size(); i++) {
            int u = q[i];
            nt.push_back(u);

            for (int j = 0; j < g[u].size(); j++) {
                int v = g[u][j].first;
                deg[v] -= 1;
                if (deg[v] == 0) {
                    q.push_back(v);
                }
            }
        }

        while (!nt.empty()) {

            int u = nt.back();
            nt.pop_back();

            if (tree[u].empty())
                continue;

            int s = 0;
            for (int i = 0; i < tree[u].size(); ++i) {
                int v = tree[u][i];

                int w = 0;
                for (int j = 0; j < g[u].size(); ++j) {
                    if (g[u][j].first == v) {
                        w = g[u][j].second;
                        break;
                    }
                }

                s += min(cost[v], w);
            }
            cost[u] = s;
            
        }

        cout << cost[r] << endl;
    }

    return 0;
}
