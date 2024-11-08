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
        q = [i]
        min_cost = costs[i]
        while q:
            node = q.pop()
            for neighbor in g[node]:
                if not visited[neighbor]:
                    visited[neighbor] = True
                    q.append(neighbor)
                    min_cost = min(min_cost, costs[neighbor])
        total += min_cost

print(total)
