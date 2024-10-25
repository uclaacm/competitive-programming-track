Python: Binary search on [1,n]

L, R = 1, n
while L < R:
    mid = (L + R) // 2
    if target > a[mid]:
        L = mid + 1
    else:
        R = mid
ans = L


C++: Binary search on [1,n]

int L=1, R=n;
while (L<R)
{
    int mid = (L+R)/2;
    if (target > a[mid])
        L = mid + 1;
    else 
        R = mid;
}
ans = L;
