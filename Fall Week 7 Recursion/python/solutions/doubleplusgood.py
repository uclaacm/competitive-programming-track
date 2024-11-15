numbers = list(map(int, input().strip().split("+")))
n = len(numbers)
possible_outputs = set()


def generate_output(pos, curnum, summables):
    if pos == n:
        possible_outputs.add(curnum + sum(summables))
        return
    generate_output(pos+1, int(str(curnum) + str(numbers[pos])), summables)
    generate_output(pos+1, numbers[pos], summables + [curnum])


generate_output(0, 0, [])
print(len(possible_outputs))
