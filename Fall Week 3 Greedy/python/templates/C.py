def solve():
    # Read input
    n = int(input())
    programming = []
    math = []
    pe = []

    # Store indices of children based on their skill type
    t = list(map(int, input().split()))
    for i in range(n):
        if t[i] == 1:
            programming.append(i + 1)  # Indices are 1-based
        elif t[i] == 2:
            math.append(i + 1)
        else:
            pe.append(i + 1)

    # Your code here

    # Find the maximum number of teams

    # Form teams

# Main function to handle a single test case
solve()
