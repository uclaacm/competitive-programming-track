def solve():
    # read the input
    a, b, c = map(int, input().split())

    tents = 0

    # Accommodate introverts
    tents += a  # Each introvert needs their own tent

    # Accommodate extroverts
    remainder = b % 3
    if remainder != 0:
        need = 3 - remainder
        # Move universals into extroverts to make multiple of 3
        b += need
        c -= need
        if c < 0:
            print(-1)
            return

    tents += b // 3  # Every 3 extroverts need a tent

    tents += (c + 2) // 3  # Need ceil(c/3) more tents for remaining universals

    print(tents)


def main():
    cases = int(input())
    for _ in range(cases):
        solve()


if __name__ == "__main__":
    main()