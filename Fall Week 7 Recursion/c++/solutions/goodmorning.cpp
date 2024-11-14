#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 * The constraints are small enough that we can use a DFS
 * to check all options for each test case, building a number
 * one button press at a time. Once a number is bigger than the 
 * target, future button presses won't help, so we stop there. 
 * To make this easier to implement, we store a vector representing the
 * keypad, with '-1' representing an out of bounds position.
 */
vector<string> keypad = {
    "123#",
    "456#",
    "789#",
    "#0##",
    "####"
};
int ans = 0; // Storing the ans globally keeps the control flow a little cleaner
void dfs(int i, int j, int curnum, int target){
    if(keypad[i][j] == '#') return;
    if(abs(curnum - target) < abs(ans - target)){
        ans = curnum;
    }
    if(curnum > target) return;
    if(curnum == 0 && keypad[i][j] == '0') return; // Edge case; hitting zero over and over again doesn't do anything
    // However, you can observe that all other button presses _must_ increase the value of the number

    // Move down
    dfs(i + 1, j, curnum, target);
    // Move right
    dfs(i, j + 1, curnum, target);
    // Hit this button (keypad[i][j] - '0' gives the numerical value of this button)
    dfs(i, j, curnum * 10 + (keypad[i][j] - '0'), target);
}
int main(){
    ios_base::sync_with_stdio(false); // Easier to debug
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
