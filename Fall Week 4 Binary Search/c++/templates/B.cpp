#include "bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int> q(m);
    for(int i = 0; i < m; i++){
        cin >> q[i];
    }
    // We need to use the sum of the first i elements - or the prefix sum -
    // a lot when solving this problem. But if we computed it naively every time,
    // it would be too slow, so you can use the vector 'prefix' to find the precomputed
    // prefix sums.
    vector<int> prefix(0);
    prefix[0] = a[0];
    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i - 1] + a[i];
    }

    // The condition should be true for the correct pile, and all piles after it
    for(int i : q){
        int lo = 0, hi = n - 1;
        while(hi - lo > 3){
            int mid = (lo + hi) / 2;
            // Check if mid satisfies the condition

            if( /* mid reaches condition */) {
                hi = mid;
            } else {
                lo = mid;
            }
        }
        for(int j = lo; j <= hi; j++ ){
            if( /* j reahces condition */){
                cout << j + 1 << endl;
                break;
            }
        }
    }
}