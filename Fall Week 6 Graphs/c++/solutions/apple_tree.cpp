#include <iostream>
#include <vector>
using namespace std;

void dfs(int start, int prev, vector<int>* adj, vector<long long>& num_leaves) {
    for (int other : adj[start]) {
        if (other == prev) continue;
        dfs(other, start, adj, num_leaves);
        num_leaves[start] += num_leaves[other];
    }
    if ((adj[start].size() == 1) && (prev != -1))
        num_leaves[start] = 1;
}

int main(void) {
    int T;
    cin>>T;
    for (int trial = 0; trial<T; trial++) {
        int N;
        cin>>N;
        vector<int> adj[N+1];
        int u,v;
        for (int i = 0; i<N-1; i++) {
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<long long> num_leaves(N+1,0);
        dfs(1,-1,adj,num_leaves);

        int Q;
        cin>>Q;
        int x,y;
        for (int i = 0; i<Q; i++) {
            cin>>x>>y;
            cout<<num_leaves[x]*num_leaves[y]<<endl;
        }
    }

    return 0;
}
