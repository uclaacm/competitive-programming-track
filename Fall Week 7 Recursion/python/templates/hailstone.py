n = int(input())


def h(n, acc):
    '''
    This function calculates the hailstone sequence of a given number n,
    accumulating the sum of the numbers in the sequence.

    Parameters:
    n (int): The number to calculate the hailstone sequence for.
    acc (int): The accumulated sum of the numbers in the sequence.

    Returns:
    int: The accumulated sum of the numbers in the hailstone sequence.
    '''
    if n == 1:
        # fill in the base case
        return 0
    elif n % 2 == 0:
        # fill in the recursive case for even numbers
        return 0
    else:
        # fill in the recursive case for odd numbers
        return 0


# call the function and print the result
print(h(n, 0))
