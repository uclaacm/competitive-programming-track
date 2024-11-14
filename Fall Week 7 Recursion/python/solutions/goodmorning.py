
'''
The constraints are small enough that we can use a DFS
to check all options for each test case, building a number
one button press at a time. Once a number is bigger than the 
target, future button presses won't help, so we stop there. 
To make this easier to implement, we store a list representing the
keypad, with '#' representing an out of bounds position.
'''

keypad = [
    "123#",
    "456#",
    "789#",
    "#0##",
    "####"
]
ans = 0  # Storing the ans globally keeps the control flow a little cleaner

def dfs(i, j, curnum, target):
    global ans
    if keypad[i][j] == '#':
        return
    if abs(curnum - target) < abs(ans - target):
        ans = curnum
    if curnum > target:
        return
    if curnum == 0 and keypad[i][j] == '0':
        return  # Edge case; hitting zero over and over again doesn't do anything
    # However, you can observe that all other button presses _must_ increase the value of the number


    # Move down
    dfs(i + 1, j, curnum, target)
    # Move right
    dfs(i, j + 1, curnum, target)
    # Hit this button
    dfs(i, j, curnum * 10 + int(keypad[i][j]), target)



qr = int(input())
for tc in range(qr):
    target = int(input())
    ans = 0
    dfs(0, 0, 0, target)
    print(ans)
