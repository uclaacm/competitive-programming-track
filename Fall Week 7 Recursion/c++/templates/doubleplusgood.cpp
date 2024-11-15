#include <bits/stdc++.h>
using namespace std;
// Under construction :) 
string s;
// Store all possible number in 'ans'; we provide template code for making them unique
vector<int> ans;
void solve(int pos, int curnum, int sum){
    // What should the base case be?
    
    // Recursive function to solve:
    // pos is position in the string
    // Remember: the numerical value of the character at s[pos] is int(s[pos] - '0')

}
int main(){
    string s;
    cin >> s;
    solve(0, 0, 0);
    sort(ans.begin(), a.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    cout << ans.size() << '\n';
}
