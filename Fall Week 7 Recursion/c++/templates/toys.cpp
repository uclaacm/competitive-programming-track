#include <iostream>

using namespace std;

int solve(int T, int K) {
    /*
    input: T = number of toys (numbered from 0, 1, ..., T-1), K = skip length
    output: chosen toy
    */

    // Base case: if there's only 1 toy, what is chosen?
    if(T == 1) {
        // TODO
    }

    // Recursive case: remove one toy

    /*
    Example: T = 5, K = 3
    Initially, the toys are 0, 1, 2, 3, 4
    We remove one toy: the toy numbered 2 is removed
    The next toy in line is 3
    Let's list all of them out starting from 3 (keeping in mind the circular nature)
    New state: 3, 4, 0, 1
    solve(T-1, K) will produce the answer if the state was 0, 1, 2, 3
    How do we convert this to the new state?
    0 -> 3
    1 -> 4
    2 -> 0
    3 -> 1
    */

    int subproblem = solve(T-1, K);
    // TODO int converted = ???;
    return converted;
}

int main()
{
    int T, K;
    cin >> T >> K;
    cout << solve(T, K) << '\n';
}
