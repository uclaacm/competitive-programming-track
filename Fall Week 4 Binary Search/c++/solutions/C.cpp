#include <bits/stdc++.h>
using namespace std;

int main() {
    // Read input
    int n, S, tmp;
    // We use long long to avoid overflow errors.
    vector<long long> a = {-1}; // To ensure 1-based indexing
    cin>>n>>S;
    for (int i = 1; i<=n; i++) {
        cin>>tmp;
        a.push_back(tmp);
    }

    // Binary search on k
    // Loop invariant: k_low <= k < k_high
    // Note the asymmetry in these inequalities. This helps avoid off-by-ones.
    // Again, we are using long long to avoid overflow errors.
    long long k_low = 0;
    long long k_high = n+1;
    long long T = 0;
    while (k_high - k_low > 1) {
        long long k_mid = (k_low + k_high) / 2;
        // Construct new array so we can find the k cheapest items
        vector<long long> a_new(a);
        for (int i = 1; i<=n; i++) {
            a_new[i] += k_mid * i;
        }
        sort(a_new.begin(), a_new.end());

        // Calculate T for this array
        long long T_temp = 0;
        for (int i = 1; i<=k_mid; i++) {
            T_temp += a_new[i];
        }
        // k too high
        if (T_temp > S) {
            k_high = k_mid;
        }
        // k too low
        else {
            T = T_temp; // Keep track of T for left endpoints of search
            k_low = k_mid;
        }
    }
    // Note that at this point, k_low <= k < k_low+1, so k = k_low.
    // Also, since T corresponds to the most recent left endpoint considered,
    // T contains the answer corresponding to k.
    cout<<k_low<<' '<<T<<endl;
    return 0;
}
