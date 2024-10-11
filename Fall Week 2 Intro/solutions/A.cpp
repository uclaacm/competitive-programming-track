#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int first_black = -1;
    int last_black = -1;
    for(int i = 0; i < n; i++){
        if(s[i] == 'B'){
            if(first_black == -1){
                first_black = i;
            }
            last_black = i;
        }
    }
    int length = last_black - first_black + 1;
    cout << length << endl;
}
int main(){
    int cases;
    cin >> cases;
    for(int c = 1; c <= cases; c++){
        solve();
    }
}
