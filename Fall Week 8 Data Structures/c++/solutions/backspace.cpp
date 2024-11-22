#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <utility>
#include <tuple>
#include <string>
#include <iostream>
using namespace std;

int main(void) {
    string S;
    cin>>S;

    vector<char> answer;
    // Construct answer using stack operations (push and pop)
    for (char c : S) {
        if (c == '<') answer.pop_back();
        else answer.push_back(c);
    }

    // Output answer
    for (char c : answer) cout<<c;
    cout<<endl;

    return 0;
}
