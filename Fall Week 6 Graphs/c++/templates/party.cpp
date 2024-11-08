#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int main()
{
    int n;
    cin >> n;
    vector<int> manager(n);
    for(int i = 0; i < n; i++) {
        cin >> manager[i];
        if(manager[i] != -1) {
            manager[i] -= 1; // convert 1-index to 0-index
        }
    }

    vector<vector<int>> adj(n);
    for(int i = 0; i < n; i++) {
        int j = manager[i];
        if(j == -1) continue;
        // we make an edge from the manager to the employee
        adj[j].push_back(i);
    }

    // our goal is to find the length of the manager chain to each person
    vector<int> dists(n, -1); // use -1 to mean distance hasn't been found yet

    for(int i = 0; i < n; i++) {
        if(manager[i] != -1) continue;
        // we start looking for the length of the manager chain using bfs
        queue<int> bfs;
        bfs.push(i);
        dists[i] = 1; // chain starts with length 1 (just the manager)
        while(!bfs.empty()) {
            // do your bfs!
        }
    }

    // look for the longest chain
    int longestChain = 0;

    cout << longestChain << '\n';
}


