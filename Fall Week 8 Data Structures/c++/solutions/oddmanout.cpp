#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <utility>
#include <tuple>
#include <string>
#include <iostream>
using namespace std;

//Just print the guest number that is single
void solve(){
    int g;
    cin >> g;
    
    unordered_map<int,int> guests;
    for (int j = 0; j < g; j++){
        int num;
        cin >> num;
        guests[num]++;
    }
    
    for (auto it = guests.begin(); it != guests.end(); it++){
        if (it->second == 1){
            cout << it->first;
        }
    }
}

int main(){
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++){
        cout << "Case #" << i << ": ";
        solve();
        cout << endl;
    }
}