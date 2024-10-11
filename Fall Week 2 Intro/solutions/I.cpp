#include <bits/stdc++.h>
using namespace std; 

/*
 * See the solution slides here: tinyurl.com/icpc-fall-2024-intro-2
 * The abridged version:
 * It turns out we just need to check the maximum distance any element gets sent backwards!
 * The probability that any element gets sent backwards is (1 / k)
 * So the expected number of elements that get sent backwards is approximately (n / k)
 * By the constraints of the problem, this is approximately (20k / k) = 20
 * So we would expect many, many elements to get sent back 'k', but none to get sent back any further
 * This lets us reconstruct 'k'.
*/
int main(){
    int n;
    cin >> n;
    vector<int> a(n + 1); // Plus one so that we can use 1-indexing
    // In this problem, the original array would have a[1] == 1, a[2] == 2, ..., a[n] == n, so 1-indexing can be helpful
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    int max_dist = 0;
    for(int i = 1; i <= n; i++){
        max_dist = max(max_dist, a[i] - i + 1);
    }
    cout << max_dist << endl;
}   
