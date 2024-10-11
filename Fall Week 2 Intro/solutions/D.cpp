#include <bits/stdc++.h>
using namespace std; 


// For every pair of characters that match, we can always append them to opposite ends of the string,
// and it will still be a palindrome. We can insert _exactly one_ leftover character in the middle
// and it will still be a palindrome - but any more than that, and it becomes impossible. This solution
// counts the number of each character in the string, and attempts to pair them up. We then try to remove
// the leftover characters. If we can't, the answer is NO, but if we can remove all the leftover characters 
// (except one), then no matter how many more character we remove, as long as we remove an unpaired character
// if one exists, we will always be able to make a palindrome, so the answer is YES.
void solve(){
    // read the input
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    bool possible; // To use this template, your code should store the answer in 'possible' (or replace it later)

    vector<int> count(26, 0); // To keep track of the counts of each string
    for(int i = 0; i < s.size(); i++){
        count[s[i] - 'a']++;
    }
    int leftover = 0;
    for(int i = 0; i < 26; i++){
        while(count[i] >= 2){
            count[i] -= 2;
        }
        if(count[i] == 1){
            leftover++;
        }
        // Or: leftover += count[i] % 2;
    }
    leftover -= k;

    possible = leftover <= 1;
    if(possible){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
int main(){
    int cases;
    cin >> cases;
    for(int c = 0; c < cases; c++){
        solve();
    }
}
