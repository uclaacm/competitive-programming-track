'''
Using a prefix sum (the sum of the first 'i' elements for all 'i')
we can quickly check whether the sum of the first 'i' piles is biggr
than the query!
'''

n = int(input())
a = list(map(int, input().split()))
m = int(input())
q = list(map(int, input().split()))

'''
We need to use the sum of the first i elements - or the prefix sum -
a lot when solving this problem. But if we computed it naively every time,
it would be too slow, so you can use the vector 'prefix' to find the precomputed
prefix sums.
'''
prefix = [0] * n
prefix[0] = a[0]
for i in range(1, n):
    prefix[i] = prefix[i - 1] + a[i]

# 'condition' should be true for the pile the i-th worm is in, and all piles after it
for i in range(m):
    lo, hi = 0, n - 1
    while hi - lo > 3:
        mid = (lo + hi) // 2
        # check if mid satisfies condition
        if ''' mid satisfies condition ''':
            lo = mid
        else:
            hi = mid


    for j in range(lo, hi + 1):
        if ''' j satisfies condition ''':
            print(j + 1)
            break
        