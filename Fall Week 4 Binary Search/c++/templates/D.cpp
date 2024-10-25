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

    // TODO: keep adding to the array and increasing the increment by 1

    // Hint: you can look at the last element using a.back()
    while ( /* Check if you can add a new element */ ){
        // Add new element
        // Increase increment
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
