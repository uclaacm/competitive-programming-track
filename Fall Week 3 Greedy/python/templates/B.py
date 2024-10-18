def solve():
    # read the input
    s = input()

    count0 = s.count('0')
    count1 = s.count('1')

    ans = min(count0, count1)

    # Your code here

    print(ans)

# Main function to handle multiple test cases
t = int(input())
for _ in range(t):
    solve()
