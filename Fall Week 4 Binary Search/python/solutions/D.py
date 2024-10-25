def solve():
    # Read the input
    l, r = map(int, input().split())

    # Greedy approach: create the list with the smallest difference between the smallest and largest elements
    a = [l]  # Start the list with l
    increment = 1

    # Add to array while possible
    while a[-1] + increment <= r:
        a.append(a[-1] + increment)
        increment += 1

    # Output the size of the list
    print(len(a))

def main():
    # Read the number of test cases
    cases = int(input())
    for _ in range(cases):
        solve()

if __name__ == "__main__":
    main()