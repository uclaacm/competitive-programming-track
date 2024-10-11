#include <bits/stdc++.h>
using namespace std; 

/*
 * See the solution slides here: tinyurl.com/icpc-fall-2024-intro-2
 * The abridged version:
 * We can break the array down into increasing and decreasing segments, and by 
 * considering how we can merge these segments, we arrive at an N log N solution,
 * just by simulating all the merges.
*/
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    string s;
    bool increasing = true;
    for(int i = 1; i < n; i++){
        if(a[i] == a[i - 1]){
            // edge case: we can skip matching elements
            continue;
        }
        if(a[i] > a[i - 1]){
            if(!increasing){
                s += "D";
            }
            increasing = true;
        }else{
            if(increasing){
                s += "I";
            }
            increasing = false;
        }
    }
    if(increasing){
        s += "I";
    }else{
        s += "D";
    }
    int ans = 0;
    while(s.size() > 1){
        if(s.back() != 'D') s += "D";
        string res;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'I'){
                // merge 'I' from the front with 'D' from the back
                assert(s.back() == 'D');
                res += "I";
            }else{
                // merge 'D' from the front with 'I' from the back
                assert(s.back() == 'I');
                res += "D";
            }
            // s.pop_front(); <- This isn't a function, but even if it was, it would be too slow
            // But symbolically, you can think of increasing 'i' as popping (removing) the front element
            s.pop_back(); 
        }
        s = res;
        ans++;
    }
    cout << ans << '\n';
}   
