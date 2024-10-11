#include <bits/stdc++.h>
using namespace std; 

/*
 * See the slides for a more detailed explanation: 
 * tinyurl.com/icpc-fall-2024-intro-1
 * But the short version is:
 * Once we know what the largest value is, after any number of operations,
 * _this value_ will still be the largest value, even if other values can tie it.
 * So we can just keep track of this one element, applying each queries, and printing
 * it as our answer.
 */
void solve(){
    int n, q;
    cin >> n >> q;
    vector<int> a(n, 0);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int max_val = 0;
    for(int i : a){ // for-each element in a
        max_val = max(max_val, i);
    }
    for(; q > 0; q--){ // iterate over all queries
        char c; int l, r;
        cin >> c >> l >> r;
        if(c == '+'){
            if(l <= max_val && max_val <= r){
                max_val++;
            }
        }else{
            if(l <= max_val && max_val <= r){
                max_val--;
            }
        }
        cout << max_val << ' ';
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
