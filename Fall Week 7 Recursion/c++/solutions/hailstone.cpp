#include <iostream>
using namespace std;

// function h
// parameters: n, acc
// acc is the accumulator, which keeps track of the sum of the numbers in the sequence
long long h(long long n, long long acc) {
    if (n == 1) {
        return acc + 1;
    } else if (n % 2 == 0) {
        return h(n / 2, acc + n);
    } else {
        return h(3 * n + 1, acc + n);
    }
}

int main() {
    long long n;
    cin >> n;
    cout << h(n, 0) << endl;
}
