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
            int manager = bfs.front(); bfs.pop(); // get front of queue and remove it
            for(int employee: adj[manager]) {
                // loop through the vector

                /*
                Note: we don't need to worry about whether a node has been visited cause
                each one can only be visited once

                Why? There is only one manager for each employee
                */
                
                dists[employee] = dists[manager] + 1;
                bfs.push(employee);
            }
        }
    }

    int longestChain = 0;
    for(int i = 0; i < n; i++) {
        if(dists[i] > longestChain) {
            longestChain = dists[i];
        }
    }

    cout << longestChain << '\n';
}


