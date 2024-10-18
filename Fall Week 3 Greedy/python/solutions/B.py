def solve():
    # read the input
    s = input()

    # Your code here
    count0 = s.count('0')
    count1 = s.count('1')

    # The number of characters we can remove is the smaller count
    ans = min(count0, count1)

    # Edge case: equal number of '0' and '1'
    if count0 == count1:
        ans -= 1

    print(ans)
    print(min(count0, count1))

# Main function to handle multiple test cases
t = int(input())
for _ in range(t):
    solve()
