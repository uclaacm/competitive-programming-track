import sys
# Please see the example usage below!
tiles = []
def get_north_tile(i, j):
    if (tiles[i][j] & 8) == 0:
        return (i - 1, j)
    else:
        return (-1, -1)
def get_south_tile(i, j):
    if (tiles[i][j] & 2) == 0:
        return (i + 1, j)
    else:
        return (-1, -1)
def get_east_tile(i, j):
    if (tiles[i][j] & 4) == 0:
        return (i, j + 1)
    else:
        return (-1, -1)
def get_west_tile(i, j):
    if (tiles[i][j] & 1) == 0:
        return (i, j - 1)
    else:
        return (-1, -1)
'''
Example usage of these functions:
x, y = get_north_tile(i, j)  # 'x' and 'y' just unpack the tuple returned by get_north_tile
if x == -1: 
    no north neighbor for (i,j)
else:
    # (x,y) is the coordinates of the north neighbor of (i,j);
    # process it here :)
'''    


n, m = map(int, sys.stdin.readline().split())
for _ in range(n):
    tiles.append(list(map(int, sys.stdin.readline().split())))
vis = [[False] *m for _ in range(n)]
ans = []
for i in range(n):
    for j in range(m):
        if vis[i][j]:
            continue
        from collections import deque
        q = deque()
        q.append((i, j))
        result = 0
        vis[i][j] = True
        while q:
            i, j = q.popleft()

            result += 1

            x, y = get_north_tile(i, j)
            if x != -1 and not vis[x][y]:
                vis[x][y] = True
                q.append((x, y))
            x, y = get_south_tile(i, j)
            if x != -1 and not vis[x][y]:
                vis[x][y] = True
                q.append((x, y))
            x, y = get_east_tile(i, j)
            if x != -1 and not vis[x][y]:
                vis[x][y] = True
                q.append((x, y))
            x, y = get_west_tile(i, j)
            if x != -1 and not vis[x][y]:
                vis[x][y] = True
                q.append((x, y))
        ans.append(result) # Add result to the answer
# By here, ans should contain the sizes of all connected components
ans.sort(reverse=True) # sort from largest to smallest
print(' '.join(map(str, ans))) # print the answer


