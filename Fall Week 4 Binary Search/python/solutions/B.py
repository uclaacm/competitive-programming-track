'''
Using a prefix sum (the sum of the first 'i' elements for all 'i')
we can quickly check whether the sum of the first 'i' piles is biggr
than the query!
'''

n = int(input())
a = list(map(int, input().split()))
m = int(input())
q = list(map(int, input().split()))

prefix = [0] * n
prefix[0] = a[0]
for i in range(1, n):
    prefix[i] = prefix[i - 1] + a[i]

for i in range(m):
    lo, hi = 0, n - 1
    while hi - lo > 3:
        mid = (lo + hi) // 2
        if prefix[mid] < q[i]:
            lo = mid
        else:
            hi = mid


    for j in range(lo, hi + 1):
        if prefix[j] >= q[i]:
            print(j + 1)
            break
        