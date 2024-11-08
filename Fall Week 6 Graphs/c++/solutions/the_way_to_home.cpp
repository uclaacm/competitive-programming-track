#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
    int n, d;
    cin >> n >> d;
    string s;
    cin >> s;
    vector<int> dists(n, -1); // dists[i] == -1 means that we haven't visited i yet
    queue<int> q;
    q.push(0);
    dists[0] = 0;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int i = 1; i <= d; i++){
            if(v + i < n && s[v + i] == '1' && dists[v + i] == -1){
                dists[v + i] = dists[v] + 1;
                q.push(v + i);
            }
        }
    }

    cout << dists[n - 1] << "\n";

}