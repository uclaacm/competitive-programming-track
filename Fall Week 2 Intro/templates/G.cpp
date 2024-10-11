#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int n, q;
    cin >> n >> q;
    vector<int> a(n, 0);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    // Any pre-processing goes here


    for(; q > 0; q--){ // iterate over all queries
        char c; int l, r;
        cin >> c >> l >> r;

        // Your code to answer each query goes here
        
        cout << ans << ' '; // Replace 'ans' with wherever your answer is stored
    }
    cout << '\n';
}
int main(){
    ios::sync_with_stdio(false); cin.tie(0); // These two lines speed up the input/output
    int cases;
    cin >> cases;
    for(int c = 1; c <= cases; c++){
        solve();
    }
}
