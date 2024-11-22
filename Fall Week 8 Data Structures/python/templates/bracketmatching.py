n = int(input())

seq = input()

stack = []

for i in range(n):
    if seq[i] == '(':
        stack.append('(')

    elif seq[i] == '{':
        # TODO: Fill out this case

    elif seq[i] == '[':
        # TODO: Fill out this case

    elif seq[i] == ')':
        if len(stack) == 0 or stack[-1] != '(':
            print('Invalid')
            exit()
        stack.pop()

    elif seq[i] == '}':
        # TODO: Fill out this case

    elif seq[i] == ']':
        # TODO: Fill out this case

if len(stack) != 0:
    # TODO: Fill out this case
else:
    # TODO: Fill out this case
