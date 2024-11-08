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

# Keep these lines; they speed up reading the input
n, m = map(int, sys.stdin.readline().split())
for _ in range(n):
    tiles.append(list(map(int, sys.stdin.readline().split())))
vis = [[False] * m for _ in range(n)]
ans = []
for a in range(n):
    for b in range(m):
        # Does anything need to go here?

        # Start a BFS from (a,b)
        from collections import deque
        q = deque()
        q.append((a, b))
        vis[a][b] = True
        
        result = 0  # The size of this component should be stored here
        while q:
            i, j = q.popleft()  # (i,j) is the current tile

            # Process (i,j) here

            x, y = get_north_tile(i, j)
            if x != -1:
                # (x,y) is a neighbor of (i,j); what do we do?

            # ... repeat for the other directions
        ans.append(result)  # Add result to the answer
# By here, ans should contain the sizes of all connected components
ans.sort(reverse=True)  # sort from largest to smallest
print(' '.join(map(str, ans)), end=' \n')
