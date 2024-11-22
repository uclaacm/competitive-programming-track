

from collections import defaultdict
# This is a map (dict) where if a key is not present, it's "defaults" to 0

qr = int(input())
for tc in range(qr):
    print("Case #{}:".format(tc+1), end=" ") # prints "Case #x "
    n = int(input())
    a = list(map(int, input().split()))
    # A now contains the list of all elements

    counts = defaultdict(int)
    for i in range(n):
        counts[a[i]] += 1

    for i in range(n):
        if counts[a[i]] == 1:
            print(a[i])
            break
