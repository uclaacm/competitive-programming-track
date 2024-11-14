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
        return acc + 1
    elif n % 2 == 0:
        return h(n // 2, acc + n)
    else:
        return h(3 * n + 1, acc + n)


print(h(n, 0))
