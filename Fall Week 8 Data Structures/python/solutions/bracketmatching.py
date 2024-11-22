n = int(input())

seq = input()

stack = []

for i in range(n):
    if seq[i] == '(':
        stack.append('(')

    elif seq[i] == '{':
        stack.append('{')

    elif seq[i] == '[':
        stack.append('[')

    elif seq[i] == ')':
        if len(stack) == 0 or stack[-1] != '(':
            print('Invalid')
            exit()
        stack.pop()

    elif seq[i] == '}':
        if len(stack) == 0 or stack[-1] != '{':
            print('Invalid')
            exit()
        stack.pop()

    elif seq[i] == ']':
        if len(stack) == 0 or stack[-1] != '[':
            print('Invalid')
            exit()
        stack.pop()

if len(stack) != 0:
    print('Invalid')
else:
    print('Valid')
