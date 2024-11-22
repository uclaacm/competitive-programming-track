


s = input()
# Hint! In Python, strings are immutable. So operations tend to be slower
# So we use a list to store the characters instead
ans = []
for c in s: 
    if c == '<':
        ans.pop(-1)
    else:
        ans.append(c)

# Here ans should store all characters after the operations
# For example, if the output is 'abc', then ans should be ['a', 'b', 'c']
print(''.join(ans))
