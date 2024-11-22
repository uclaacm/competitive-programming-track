from collections import deque
n = int(input())

front = deque()
back = deque()

for _ in range(n):
    cmd, x = input().split()
    x = int(x)

    if cmd == "push_back":
        back.append(x)
        if len(back) > len(front):
            front.append(back.popleft())
    elif cmd == "push_front":
        front.appendleft(x)
        if len(front) > len(back) + 1:
            back.appendleft(front.pop())
    elif cmd == "push_middle":
        if len(front) == len(back):
            front.append(x)
        else:
            back.appendleft(x)
    elif cmd == "get":
        if x < len(front):
            print(front[x])
        else:
            print(back[x - len(front)])

# push_back 9
# push_front 3
# push_middle 5
# get 0
# get 1
# get 2
# push_middle 1
# get 1
# get 2

# 6
# push_back 9
# push_back 8
# push_back 7
# push_back 6
# push_middle 3
# push_front 2
