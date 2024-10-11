#include <bits/stdc++.h>
using namespace std; 

/*
 * Let's just pick a row as our final topic - the row that will remain after we eliminate all others.
 * If the judge knows which row we will pick, they will get rid of all columns in that row except for the minimum,
 * so our final answer will be the minimum element in that row. 
 * Therefore, a lowerbound for our answer is max { min element in row i } for all i.
 * It turns out we can't do any better playing optimally. 
 * An informal proof of the idea is that, when the judge removes one of 'n columns from 'n - 1' rows,
 * there must be at least one column that doesn't have a minimum element from any of the rows. So at each step,
 * the judge never has to get rid of any of the minimum elements, and we will always be stuck with at least one 
 * of them - but we get to choose which one.
*/
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

    int ans = 0;
    for(int i = 0; i < n; i++){
        int min_val = INT_MAX;
        for(int j = 0; j < n; j++){
            min_val = min(min_val, a[i][j]);
        }
        ans = max(ans, min_val);
    }
    cout << ans << '\n';
}
