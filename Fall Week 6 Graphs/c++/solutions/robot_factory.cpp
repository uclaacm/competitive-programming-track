#include<algorithm>
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

// Please see the example usage below!
vector<vector<int>> tiles;
pair<int, int> get_north_tile(int i, int j){
    if((tiles[i][j] & 8) == 0){
        return {i - 1, j};
    }else{
        return {-1, -1};
    }
}
pair<int, int> get_south_tile(int i, int j){
    if((tiles[i][j] & 2) == 0){
        return {i + 1, j};
    }else{
        return {-1, -1};
    }
}
pair<int, int> get_east_tile(int i, int j){
    if((tiles[i][j] & 4) == 0){
        return {i, j + 1};
    }else{
        return {-1, -1};
    }
}
pair<int, int> get_west_tile(int i, int j){
    if((tiles[i][j] & 1) == 0){
        return {i, j - 1};
    }else{
        return {-1, -1};
    }
}
/*
Example usage of these functions:
int x,y;
tie(x,y) = get_north_tile(i,j); // 'tie' just unpacks the pair into x and y
if(x == -1) { 
    no north neighbor for (i,j)
} else{
    // (x,y) is the coordinates of the north neighbor of (i,j);
    // process it here :)
}    
*/

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); // Keep these lines; they speed up reading the input
    int n, m;
    cin >> n >> m;
    tiles.resize(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> tiles[i][j];
        }
    }
    vector<vector<bool>> vis(n, vector<bool>(m));
    vector<int> ans;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(vis[i][j]) continue;
            queue<pair<int, int>> q;
            q.push({i, j});
            int result = 0;
            vis[i][j] = true;
            while(!q.empty()){
                auto [i,j] = q.front();
                q.pop();

                result += 1;

                int x,y;
                tie(x,y) = get_north_tile(i,j);
                if(x != -1 && !vis[x][y]){
                    vis[x][y] = true;
                    q.push({x,y});
                }
                tie(x,y) = get_south_tile(i,j);
                if(x != -1 && !vis[x][y]){
                    vis[x][y] = true;
                    q.push({x,y});
                }
                tie(x,y) = get_east_tile(i,j);
                if(x != -1 && !vis[x][y]){
                    vis[x][y] = true;
                    q.push({x,y});
                }
                tie(x,y) = get_west_tile(i,j);
                if(x != -1 && !vis[x][y]){
                    vis[x][y] = true;
                    q.push({x,y});
                }
            }   
            ans.push_back(result); // Add result to the answer
        } 
    }
    // By here, ans should contain the sizes of all connected components
    sort(ans.begin(), ans.end(), greater<int>()); // sort from largest to smallest
    for(int x : ans){
        cout << x << " ";
    }
    cout << endl;
}