#include <iostream>
using namespace std;

int main() {
    // read input
    string a, b;
    cin >> a >> b;

    // reverse the strings
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    // convert the strings to integers
    int valueA = stoi(a);
    int valueB = stoi(b);

    // print the maximum value
    cout << max(valueA, valueB) << endl;
}