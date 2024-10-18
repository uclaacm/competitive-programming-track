#include <bits/stdc++.h>
using namespace std; 

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    // Functions you may find helpful!
    // s.substr(i, len) returns a substring of s starting at index 'i' with length 'len'
    // s.substr(i) returns a substring of s starting at index 'i' until the end of the string
    // For string s, c: s + c -> concatenates c to the end of s
    // For string s, c: c + s -> concatenates c to the beginning of s

    // Your code here

    // Your answer should be stored in 'ans' here!
    cout << ans << endl;
}
int main(){
    int cases;
    cin >> cases;
    for(int c = 1; c <= cases; c++){
        solve();
    }
}
