#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    // a[i][j] is the j-th element of the i-th row

    // Your code here; 
    cout << ans << endl; // Replace 'ans' with whereever you store your answer
}
