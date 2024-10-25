#include "bits/stdc++.h"
using namespace std;


/*
This problem can be implemented with binary search, as if we can't afford 'k' elements,
we know 'k + 1' elements will be more expensive, so we can always elimiate half of the search space.

For this problem, since the costs are always changing, we need to update the cost
array each iteration. After updating the cost array, we can find the minimum cost
to select 'k' elements by sorting the updated cost array.
*/
int main(){
    int n; long long s; 
    cin >> n >> s; 
    vector<long long> a(n); // We need long longs! The numbers become too big to be stored in an int
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int lo = 0, hi = n;
    while(hi - lo > 3){
        int mid = (lo + hi) / 2;
        vector<long long> costs(n);
        for(int i = 0; i < n; i++){
            costs[i] = a[i] + 1ll * mid * (i + 1); // The problem-statement is 1-indexed, so add 1
        }
        sort(costs.begin(), costs.end()); // Now we have the sorted costs, so we can find the minimum cost of 'mid' elements
        long long sum = 0;
        for(int i = 0; i < mid; i++){
            sum += costs[i];
        }
        if(sum <= s){
            lo = mid; // We can afford 'mid' elements, so we can try for more
        } else {
            hi = mid; // We can't afford 'mid' elements, so we need to try less
        }
        
    }
    for(int k = hi; k >= lo; k--){ // Print the maximum number in range we can afford

        vector<long long> costs(n);
        for(int i = 0; i < n; i++){
            costs[i] = a[i] + k * (i + 1); // The problem-statement is 1-indexed, so add 1
        }
        sort(costs.begin(), costs.end()); // Now we have the sorted costs, so we can find the minimum cost of 'mid' elements
        long long sum = 0;
        for(int i = 0; i < k; i++){
            sum += costs[i];
        }
        if(sum <= s){
            cout << k << ' ' << sum << endl; // We can afford 'k' elements!
            break;
        }
    }

}
