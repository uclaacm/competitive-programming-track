n, d = map(int, input().split())
lilipads = input()

stack = []
stack.append((0, 0))
# position, number of jumps
visited = [False] * n

while stack:
    
    positions, num_jumps = # TODO: fill in the pop function

    if visited[position]:
        continue

    # TODO: mark the position as visited

    if position == n - 1:
        print(num_jumps)
        break

    # iterate over the range of d to 0 to next possible jump
    for i in range(d, 0, -1):
        if position + i < n and lilipads[position + i] == '1':
            # TODO: add the next jump to the stack
else:
    print(-1)