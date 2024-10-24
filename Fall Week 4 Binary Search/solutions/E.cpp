#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 2e5+5;

int prefix_zeroes[MAXN+1], prefix_ones[MAXN+1];
int result[MAXN];

// Find the minimum number of beautiful substrings for each k
void solve(const string& s)
{
    int n = s.size();

    // calculate the prefix sums for zeros and ones
    for (int i=0; i<n; i++)
    {
        prefix_zeroes[i+1] = prefix_zeroes[i] + (s[i] == '0');
        prefix_ones[i+1] = prefix_ones[i] + (s[i] == '1');
    }

    for (int k=1; k<=n; k++)
    {
        int m=0;  // the minimum number of beautiful substrings
        int i=0;  // current position in the string

        while (i<n)
        {
            // use binary search to find the maximum j such that the substring [i,j] is beautiful
            int L=i, R=n;
            while (L<R)
            {
                int mid = (L+R)/2;
                int cnt0 = prefix_zeroes[mid + 1] - prefix_zeroes[i];
                int cnt1 = prefix_ones[mid + 1] - prefix_ones[i];
                if (cnt0 <= k || cnt1 <= k)
                    L = mid + 1;
                else 
                    R = mid;
            }
            // move i to the end of the beautiful substring
            i = L;
            m++;
        }
        result[k-1] = m;
    }
}

int main()
{
    // read the input
    string s;
    cin >> s;

    // find the minimum partitions for each k
    solve(s);

    for (int k = 1; k <= s.size(); k++)
        cout << result[k - 1] << " ";
    
    cout << endl;

    return 0;
}
