#include <bits/stdc++.h>

using namespace std;

const int MAXM = 3e5+5;

int n, m;
int arr[MAXM];

int recur(int l, int r) // the minimum possible number of operations for the permutation on [l, r)
{
	if (r-l == 1)
        return 0;
	int mid = (l+r)/2;

	int maxL = 0, maxR = 0;
    for (int i = l; i < mid; i++)
        maxL = max(maxL, arr[i]);
    for (int i = mid; i < r; i++)
        maxR = max(maxR, arr[i]);
	int ans = 0;
	if (maxL > maxR)
    {
		ans++;
		for (int i = 0; i < mid-l; i++)
			swap(arr[l+i], arr[mid+i]);
	}
	return recur(l, mid) + recur(mid, r) + ans;
}

int solve()
{
    // read the input
    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> arr[i];
	int ans = recur(0, m); 
	if (is_sorted(arr, arr + m))
		cout << ans << endl;
	else
        cout << "-1" << endl;
}

int main()
{
    // read number of test cases
	int t;
    cin >> t;
    for (int i = 0; i < t; i++)
		solve();
    return 0;
}