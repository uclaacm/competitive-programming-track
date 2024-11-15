numbers = list(map(int, input().strip().split("+")))
n = len(numbers)
possible_outputs = set()


# summables is a list of numbers that will ultimately be added,
# this exists to prevent order of operations issues
def generate_output(pos, curnum, summables):
    if pos == n:
        # add the current sum to the set of possible outputs
        # don't forget to add the last number to the sum!
        return
    # add the current number to the current sum

    # replace the current sum with the current number and add the
    # previous sum to the list of summables


generate_output(0, 0, [])
print(len(possible_outputs))
