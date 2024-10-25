#include <bits/stdc++.h>
using namespace std; 

void solve(){
    // read the input
    int l, r;
    cin >> l >> r;

    // greedy: create the array with the smallest different between the smallest and largest elements
    vector<int> a;
    a.push_back(l);
    int increment = 1;

    while (a.back() + increment <= r){
        a.push_back(a.back() + increment);
        increment++;
    }

    cout << a.size() << endl;
}

int main(){
    int cases;
    cin >> cases;
    for(int c = 0; c < cases; c++){
        solve();
    }
}
