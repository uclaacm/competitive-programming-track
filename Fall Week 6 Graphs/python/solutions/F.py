def solve():
    # read the input
    n = int(input())
    a = [list(input().strip()) for _ in range(2)]

    # check the condition
    flag = True
    for i in range(n - 1):
        if i % 2 == 0:
            flag &= (a[0][i+1] == '>' or a[1][i] == '>')
        else:
            flag &= (a[0][i] == '>' or a[1][i+1] == '>')

    # output the result
    print("YES" if flag else "NO")

# read number of test cases
t = int(input())
for _ in range(t):
    solve()
