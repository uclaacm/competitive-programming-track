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
            programming.append(i + 1)  # Indices are 1-indexed
        elif t[i] == 2:
            math.append(i + 1)
        else:
            pe.append(i + 1)

    # Find the maximum number of teams
    w = min(len(programming), len(math), len(pe))
    print(w)

    # Form teams
    for i in range(w):
        print(programming[i], math[i], pe[i])

# Main function to handle a single test case
solve()
