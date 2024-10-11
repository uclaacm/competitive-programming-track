#include <bits/stdc++.h>
using namespace std; 

/*
 * It's always possible to concatenate string a and b to get a valid answer, but this
 * won't be optimal; what if 'a' and 'b' share characters? We might be able to count
 * one character towards both strings.
 * Intuitively, we want the "biggest overlap" between the string a and the subsequence b.
 * The main challenge is to find what that overlap is. If we know what position in 'b'
 * the overlap starts, we can iterate through the characters of 'a', accepting matches
 * as we find them. 
 * The constraints are small enough that we can just try all possible
 * starting positions in 'b'! For any given starting position, the required length
 * is the characters before the starting position (these must be appended to the beginning)
 * and the characters in 'b' that remain unmatched (these must be appended to the end).
 * Trying all possible starting positions gives us the answer.
 */
void solve(){
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    int ans = INT_MAX;
    for(int i = 0; i < m; i++){
        int ptr = i;
        for(int j = i; j < n; j++){
            if(ptr < m && a[j] == b[ptr]){
                ptr++;
            }
        }
        int sum = n + (m - ptr) + i;
        ans = min(ans, sum);
    }
    cout << ans << endl;
}
int main(){
    int cases;
    cin >> cases;
    for(int c = 1; c <= cases; c++){
        solve();
    }
}
