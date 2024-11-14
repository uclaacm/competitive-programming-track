
ans = 0  # Storing the ans globally keeps the control flow a little cleaner

def dfs(i, j, curnum, target)
    global ans
    # Hint: we can use a DFS, where 
    #  - (i,j) are the current position
    #  - curnum is the number we've typed in so far
    #  - target is the value we're trying to create

    # Your DFS code goes here.
    pass


qr = int(input())
for tc in range(1, qr + 1):
    target = int(input())
    ans = 0
    dfs(0, 0, 0, target)
    print(ans)
