from collections import defaultdict

n, m = map(int, input().strip().split())
costs = list(map(int, input().strip().split()))

g = defaultdict(list)
for i in range(m):
    a, b = map(int, input().strip().split())
    a -= 1
    b -= 1
    g[a].append(b)
    g[b].append(a)

visited = [False] * n
total = 0

for i in range(n):
    if not visited[i]:
        visited[i] = True
        # TODO: make the queue and preload it with the current node
        
        min_cost = costs[i]
        while q:
            node = q.pop()
            for neighbor in g[node]:
                if not visited[neighbor]:
                    # TODO: mark the neighbor as visited
                    # TODO: add the neighbor to the queue
                    # TODO: update the minimum cost
        # TODO: add the minimum cost to the total

print(total)
