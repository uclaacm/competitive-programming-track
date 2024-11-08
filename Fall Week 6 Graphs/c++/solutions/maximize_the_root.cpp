#include <iostream>
#include <vector>
using namespace std;

const long long INF = 2e9 + 50;
vector<vector<int>> adj;
vector<long long> a;
bool dfs(int node, long long target){
    long long req = target - a[node];
    if(req > 0 && adj[node].size() == 0){
        return false;
    }
    if(node == 0){
        if(req <= 0) return true;
        target = req;
    }else{
        target += max(0LL, req);
        target = min(target, INF);
    }
    for(int i : adj[node]){
        bool res = dfs(i, target);
        if(!res){
            return false;
        }
    }
    return true;
}
void solve(){
    int n;
    cin >> n;
    a.resize(n);
    adj = vector<vector<int>>(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 1; i < n; i++){
        int p;
        cin >> p;
        p--;
        adj[p].push_back(i);
    }
    long long  lo = 0, hi = INF;
    while(lo < hi){
        long long  mid = (lo + hi + 1) / 2;
        if(dfs(0, mid)){
            lo = mid;
        }else{
            hi = mid - 1;
        }
    }
    cout << lo << '\n';
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); // Keep these lines; they speed up reading the input
    int qr;
    cin >> qr;
    for(int i = 0; i < qr; i++){
        solve();
    }
}