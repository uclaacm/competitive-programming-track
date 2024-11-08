from collections import deque

n = int(input())
manager = [0] * n
for i in range(n):
    manager[i] = int(input())
    if manager[i] != -1:
        manager[i] -= 1  # convert 1-index to 0-index

adj = [[] for _ in range(n)] # constructing 2-d lists is tricky in Python
for i in range(n):
    j = manager[i]
    if j == -1:
        continue
    # we make an edge from the manager to the employee
    adj[j].append(i)

# our goal is to find the length of the manager chain to each person
dists = [-1] * n  # use -1 to mean distance hasn't been found yet
for i in range(n):
    if manager[i] != -1:
        continue
    # we start looking for the length of the manager chain using bfs
    bfs = deque() # python doesn't have a queue, so use deque
    bfs.append(i)
    dists[i] = 1  # chain starts with length 1 (just the manager)
    while bfs:
        cur = bfs.popleft()  # get front of queue and remove it
        for employee in adj[cur]:
            # loop through the vector

            '''
            Note: we don't need to worry about whether a node has been visited cause
            each one can only be visited once

            Why? There is only one manager for each employee
            '''

            dists[employee] = dists[cur] + 1
            bfs.append(employee)

longest_chain = 0
for i in range(n):
    if dists[i] > longest_chain:
        longest_chain = dists[i]

print(longest_chain)
