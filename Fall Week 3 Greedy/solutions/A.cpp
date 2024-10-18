#include <bits/stdc++.h>
using namespace std; 

void solve(){
    // read the input
    int n;
    cin >> n;
    string s;
    cin >> s;

    // Check if there's an '8' at or before position n-11
    bool possible = false;
    for (int i = 0; i <= n - 11; i++) {
        if (s[i] == '8') {
            possible = true;
            break;
        }
    }

    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main(){
    int cases;
    cin >> cases;
    for(int c = 0; c < cases; c++){
        solve();
    }
}

