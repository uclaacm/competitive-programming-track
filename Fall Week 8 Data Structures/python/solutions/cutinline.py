n = int(input())

line = []

for i in range(n):
    line.append(input())

c = int(input())

for i in range(c):
    cmd = input().split()

    if cmd[0] == 'cut':
        line.insert(line.index(cmd[2]), cmd[1])

    elif cmd[0] == 'leave':
        line.remove(cmd[1])

for i in line:
    print(i)
