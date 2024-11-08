/*
 * Problem title: Copil Copac Draws Trees
 * URL: https://codeforces.com/contest/1830/problem/A
 * Source: Codeforces Contest 1830 problem A
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int,int>

int T,N,P[200005];
vector<int> adj_list[200005];
unordered_map<ll, int> edge_to_index;

ll hash_edge(ll u, ll v) {
    return 200010*u+v;
}
                                                                                                                                                    
int dfs(int start, int index) {                                                                                                                     
    int ans = 1;                                                                                                                                    
    for (int v : adj_list[start]) {
        if (P[v]) continue;
        P[v] = start;
        int index2 = edge_to_index[hash_edge(start, v)];
        int tmp = dfs(v, index2) + (index>index2);
        ans = max(ans, tmp);
    }
    return ans;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (cin>>T; T; T--) {
        cin>>N;
        for (int i = 0; i<N+4; i++) adj_list[i].clear();
        edge_to_index.clear();
        fill_n(P,N+4,0);
        int u,v;
        for (int i = 0; i<N-1; i++) {
           cin>>u>>v;
           adj_list[u].push_back(v);
           adj_list[v].push_back(u);
           edge_to_index[hash_edge(u,v)] = i;
           edge_to_index[hash_edge(v,u)] = i;
        }
        cout<<dfs(1, -1)<<endl;
    }

    return 0;
}
