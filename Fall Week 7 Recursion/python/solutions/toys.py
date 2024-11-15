import sys
sys.setrecursionlimit(10000000)

# Warning: this will not work in Python because Python functions use too much RAM
# Can you see how we can rewrite this recursive function into a for loop?

def solve(T, K):
    '''
    input: T = number of toys (numbered from 0, 1, ..., T-1), K = skip length
    output: chosen toy
    '''
    # Base case: if there's only 1 toy (numbered 0), it is chosen
    if(T == 1): return 0;

    # Recursive case: remove one toy
    '''
    Example: T = 5, K = 3
    Initially, the toys are 0, 1, 2, 3, 4
    We remove one toy: the toy numbered 2 is removed
    The next toy in line is 3
    Let's list all of them out starting from 3 (keeping in mind the circular nature)
    New state: 3, 4, 0, 1
    solve(T-1, K) will produce the answer if the state was 0, 1, 2, 3
    How do we convert this to the new state?
    0 -> 3 (+K)
    1 -> 4 (+K)
    2 -> 0 (+K = 5, %T = 0)
    3 -> 1 (+K = 6, %T = 1)
    '''

    subproblem = solve(T-1, K);
    converted = (subproblem+K)%T;
    return converted;

T, K = map(int, input().split())
print(solve(T,K))
