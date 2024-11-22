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
        # TODO: Implement push_front
        pass
    elif cmd == "push_middle":
        # TODO: Implement push_middle
        pass
    elif cmd == "get":
        # TODO: Implement get
        pass
