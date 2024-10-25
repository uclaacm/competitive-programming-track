#include "bits/stdc++.h"
using namespace std;

/*
Using a prefix sum (the sum of the first 'i' elements for all 'i')
we can quickly check whether the sum of the first 'i' piles is biggr
than the query!
 */

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

    vector<int> prefix(n);
    prefix[0] = a[0];
    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i - 1] + a[i];
    }

    for(int i : q){
        int lo = 0, hi = n - 1;
        while(hi - lo > 3){
            int mid = (lo + hi) / 2;
            if(prefix[mid] < i){
                lo = mid;
            } else {
                hi = mid;
            }
        }
        for(int j = lo; j <= hi; j++ ){
            if(prefix[j] >= i){
                cout << j + 1 << endl;
                break;
            }
        }
    }
}
