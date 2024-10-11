#include <bits/stdc++.h>
using namespace std; 

// Let's work through this problem by considering larger and larger values of n.
// For n = 2, the only possible sum a[0] - a[1], so this is our answer
// For n = 3, we have two possible sums: 
// a[0] - (a[1] - a[2]) = a[0] - a[1] + a[2]
// and
// (a[0] - a[1]) - a[2] = a[0] - a[1] - a[2]
// The a[2]'s cancel! Our answer is still a[0] - a[1].
// We can show that this is true for all n by induction. Informally, you can see that for 
// all elements except the first and the second, there will be an equal number of moves
// that result in that element being added and subtracted from the sum, so it will always
// cancel out. 
const int mod = 1e9 + 7;
// If you're unfamiliar with modular arithmetic, you can treat these functions as black boxes
// and call them like you would fractions or real numbers; multiplication and division have
// all the same properties.
// It may be helpful to test your code using doubles, and then switch to using these functions
// instead of +, -, *, and / on doubles.
int mod_add(int i, int j){ // Returns (i + j) % mod
    return (i + j) % mod;
}
int mod_subtract(int i, int j){ // Returns (i - j) % mod
    return (i - j + mod) % mod;
}
int mod_multiply(int i, int j){ // Returns (i * j) % mod
    return (1LL * i * j) % mod;
}
int mod_power(int base, int exp){ // Returns (base^exp) % mod
    int result = 1;
    while(exp > 0){
        if(exp % 2 == 1){
            result = mod_multiply(result, base);
        }
        base = mod_multiply(base, base);
        exp /= 2;
    }
    return result;
}
int mod_division(int i, int j){ // Returns (i / j) % mod
    return mod_multiply(i, mod_power(j, mod - 2));
}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int ans = mod_subtract(a[0], a[1]);
    cout << ans << endl;

} 
