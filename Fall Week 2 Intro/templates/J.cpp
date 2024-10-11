#include <bits/stdc++.h>
using namespace std; 

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

    // Your code here;
    cout << ans << endl; // Replace 'ans' with whereever you store your answer
} 
