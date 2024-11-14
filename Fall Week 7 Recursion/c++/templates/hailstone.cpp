#include <iostream>
using namespace std;

// function h
// parameters: n, acc
// acc is the accumulator, which keeps track of the sum of the numbers in the sequence
long long h(long long n, long long acc) {
    if (n == 1) {
        // fill in the base case
        return;
    } else if (n % 2 == 0) {
        // fill in the recursive case for even numbers
        return;
    } else {
        // fill in the recursive case for odd numbers
        return;
    }
}

int main() {
    // read input
    long long n;
    cin >> n;

    // call function and print result
    cout << h(n, 0) << endl;
}
