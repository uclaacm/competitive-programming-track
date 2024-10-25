#include "bits/stdc++.h"
using namespace std;


/*
If we're preforming k-swaps, we need to preform them on (k, n - k + 1), .... (2, n - 1), (1, n)
Otherwise, either the first k or the last k elements wouldn't be sorted. Let's assume the array is sorted
if we perform swaps on the first k-elements. Then if we also performed it on the first (k + 1)-elements, we'd 
just swap these elements into the same spot - it would still be sorted. The fact that (if result is sorted for k)
implies (result is sorted for k + 1) means that we can binary search to find the lowest k - the first value such 
that the result is sorted.
*/
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int lo = 0, hi = n - 1;
    while(lo < hi){
        int mid = (lo + hi) / 2;
        int prv = -1;
        bool sorted = true;
        for(int i : a){
            if(i > mid && i < n - mid + 1){
                if(i < prv) sorted = false;
                prv = i;
            }
        }
        if(sorted) hi = mid;
        else lo = mid + 1;
    }

    cout << lo << '\n';
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}