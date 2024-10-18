def solve():
    # read the input
    n = int(input())

    # Denominations
    bills = [100, 20, 10, 5, 1]
    count = 0

    for bill in bills:
        count += n // bill  # Add the number of bills of this denomination
        n %= bill           # Update remaining amount

    print(count)

# Main function to handle a single test case
solve()
