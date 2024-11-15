#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

// The numbers in the input
vector<string> nums; 
// Store all possible numbers in 'ans'; we provide template code for making them unique
vector<long long> ans;
void solve(int pos, string curnum, long long sum){
    // Reminder: to convert a string 's' to a long long int, use stoll(s)
    // We need long long ints because there can be 18 digits, but a long long int is large enough to store the answer
    // What base case goes here


    // Your recursive calls here
}
int main(){
    /* Reading and parsing the input*/
    string s;
    cin >> s;
    for(char& c : s) if(c == '+') c = ' ';
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        nums.push_back(tmp);
    }
    /* End input*/

    // Begin recusion
    solve(0, "", 0); 

    // Find unique elements and print answer  
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    cout << ans.size() << '\n';
}
