#include <bits/stdc++.h>
using namespace std; 

/*
 * The main thing that will decrease our password's strength is if 
 * two consecutive characters are the same. We can iterate through
 * the string and check if the current character is the same as the
 * previous character. If it is, we can break them up with a different
 * character. If we find none, we can just add any (different) character
 * to the end of the string!
 */

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    // Functions you may find helpful!
    // s.substr(i, len) returns a substring of s starting at index 'i' with length 'len'
    // s.substr(i) returns a substring of s starting at index 'i' until the end of the string
    // For string s, c: s + c -> concatenates c to the end of s
    // For string s, c: c + s -> concatenates c to the beginning of s
    bool found_match = false;
    string ans;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i - 1]){
            char c = 'a';
            if(s[i] == 'a') c = 'b'; // We need to break these two characters up with a different character
            ans = s;
            ans = s.substr(0, i) + c + s.substr(i);
            found_match = true;
        }
    }
    if(!found_match){
        char c = 'a';
        if(s[n - 1] == 'a') c = 'b';
        ans = s + c;
    }

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
