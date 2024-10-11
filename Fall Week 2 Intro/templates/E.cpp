#include <bits/stdc++.h>
using namespace std; 

vector<string> grid;
vector<vector<int>> ans;
// Helper function to toggle a character. 
// Won't work if you call "toggle('W')" or "toggle('B')"
// Will toggle a grid square if you call "toggle(grid[i][j])"
void toggle(char& c){
    if(c == 'W') c = 'B';
    else c = 'W';
}
// Helper function to check if a point is in the grid
bool in_grid(int i, int j){
    return i >= 0 && i < grid.size() && j >= 0 && j < grid[0].size();
}
// The helper function "apply" will apply an operation to a grid square.
// You do not need to need to apply the first operation explicitly (it is the default), 
// but you can. 
// IF AN OPERATION IS ALREADY APPLIED, this function will undo it and replace it with the new operation.
// If no operation is applied, this function will only apply the new operation.
// The grid and answer will be updated accordingly after the operation is applied.
// You do not need to understand how any of these functions work to solve this problem.
void apply(int i, int j, int op){
    if(ans[i][j] != 1){
        int tmp = ans[i][j];
        ans[i][j] = 1;
        apply(i, j, tmp);
    }
    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0}; // Helper arrays to move in the four directions
    if(op == 1){
        // pass;
    }else if(op == 2){
        for(int k = 0; k < 4; k++){
            int ni = i + dx[k];
            int nj = j + dy[k];
            if(in_grid(ni, nj)){
                toggle(grid[ni][nj]);
            }
        }
    }else if(op == 3){
        toggle(grid[i][j]);
        for(int k = 0; k < 4; k++){
            int ni = i + dx[k];
            int nj = j + dy[k];
            if(in_grid(ni, nj)){
                toggle(grid[ni][nj]);
            }
        }
    }
    ans[i][j] = op;
}
void print_ans(){
    // Your solution should call this if you have found a solution function
    cout << 1 << endl;
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[0].size(); j++){
            cout << ans[i][j];
        }
        cout << '\n';
    }
}
void print_no_solution(){
    // Your solution should call this if you have determined that there is no solution
    cout << -1 << endl;
}
int main(){
    std::ios::sync_with_stdio(false); cin.tie(0); // These two lines speed up the input/output process
    int r, c;
    cin >> r >> c;
    grid = vector<string>(r, string(c, ' '));
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> grid[i][j]; // grid[i][j] is the j-th character of the i-th row
        }
    }
    // The answer will be stored here; initially, all squares are set to 1 (the first operation)
    ans = vector<vector<int>>(r, vector<int>(c, 1)); 
    // Calling apply(i, j, op) will update both the grid and the answer

    // Your code goes here!
    
}
