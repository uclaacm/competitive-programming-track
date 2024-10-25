#include <bits/stdc++.h>
using namespace std; 

void solve(){
    // read the input
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    // sort array a, since we'll be searching through a
    sort(a.begin(), a.end());

    //iterate through all integers in b
    for (int i = 0; i < m; i++){
        int cutoff = b[i];

        // binary search through a for the smallest element larger than cutoff
        int lo = 0;
        int hi = n;

        while (lo < hi){
            int mid = (lo + hi) / 2;
            if (a[mid] <= cutoff) lo = mid + 1;
            else hi = mid;
        }
        
        // output answer for given integer in b
        cout << lo << " ";
    }

    cout << endl;
}

int main(){
    solve();
}
