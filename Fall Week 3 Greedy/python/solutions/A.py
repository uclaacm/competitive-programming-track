def solve():
    # read the input
    n = int(input())
    s = input()

    possible = False
    for i in range(n - 10):
        if s[i] == '8':
            possible = True
            break

    if possible:
        print("YES")
    else:
        print("NO")

# Main function to handle multiple test cases
t = int(input())
for _ in range(t):
    solve()
