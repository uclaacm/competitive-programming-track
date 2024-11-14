#include <iostream>
#include <string>
#include <vector>
using namespace std;


int ans = 0; // Storing the ans globally keeps the control flow a little cleaner
void dfs(int i, int j, int curnum, int target){
    // Hint: we can use a DFS, where 
    //  - (i,j) are the current position
    //  - curnum is the number we've typed in so far
    //  - target is the value we're trying to create

    // Your DFS code goes here.
}
int main(){
    ios_base::sync_with_stdio(false); // Easier to debug from terminal with this line
    int qr;
    cin >> qr;
    for(int tc = 1; tc <= qr; tc++){
        int target;
        cin >> target;
        ans = 0;
        dfs(0,0,0,target);
        cout << ans << '\n';
    }
}
