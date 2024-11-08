n, d = map(int, input().split())
lilipads = input()

stack = []
stack.append((0, 0))
# position, number of jumps
visited = [False] * n

while stack:
    position, num_jumps = stack.pop(0)
    if visited[position]:
        continue
    visited[position] = True
    if position == n - 1:
        print(num_jumps)
        break
    for i in range(d, 0, -1):
        if position + i < n and lilipads[position + i] == '1':
            stack.append((position + i, num_jumps + 1))
else:
    print(-1)