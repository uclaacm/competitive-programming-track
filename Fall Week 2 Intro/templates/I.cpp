#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n;
    cin >> n;
    vector<int> a(n + 1); // Plus one so that we can use 1-indexing
    // In this problem, the original array would have a[1] == 1, a[2] == 2, ..., a[n] == n, so 1-indexing can be helpful
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    // a[1] is the first element of the array, a[2] is the second element of the array, etc.

    // Your code here;

    cout << ans << endl; // Replace 'ans' with whereever you store your answer
}   
