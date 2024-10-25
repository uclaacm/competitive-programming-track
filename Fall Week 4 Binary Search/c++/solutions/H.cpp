#include <bits/stdc++.h>
using namespace std; 

long long n; // note: 10^18 exceeds the capacity of an int, so we must use long long

bool f(long long mid) {
    return mid*(mid-1)/2 <= n;
}

/*
Main idea: using distinct flavors is the best for getting a large number of cones
If we have k distinct flavors, we can pair them up in k*(k-1)/2 ways
The only other way to make cones is to use 2 of the same flavor
Thus, our goal is to use the largest k such that k*(k-1)/2 is less than n
For the remaining cones, we need to use 2 of the same flavor
Note that we can reuse some of the initial k flavors for this case
*/

void solve() {
    // read the input (we declared n globally so the function can use it)
    cin >> n;

    // GOAL: find the largest k such that k*(k-1)/2 <= n
    // We can binary search for this value
    long long lo = 0;
    long long hi = 2e9; // Can you see why using hi = n will cause integer overflows?
    while (lo < hi) {
        long long mid = (lo + hi) / 2;
        if (f(mid)) lo = mid + 1; // this will find the least k such that f(k) fails
        else hi = mid;
    }
    // Subtract one to get largest k such that f(k) succeeds
    long long k = lo-1;
    // There are k choose 2 = k*(k-1)/2 ways to make cones using 2 different flavors
    long long numcones = k*(k-1)/2;
    // The remaining cones need to be made one at a time using 2 of the same flavor
    long long rem = n-numcones;
    long long ans = k;
    if(rem <= k) {
        // This case is easy: we just pair up all the existing flavors with a duplicate
        ans += rem;
    } else {
        // For the first k pairs, we only need 1 scoop
        // For the extra ones, we need to supply both scoops
        ans += k + (rem-k)*2;
    }

    cout << ans << endl;
}


int main() {
    int cases;
    cin >> cases;
    for(int c = 0; c < cases; c++) {
        solve();
    }
}
