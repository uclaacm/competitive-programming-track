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


int main(){
    string name;

    // All names will be read in this while-loop
    while(true){
        getline(cin, name); // Get the next line (including spaces)
        while(name.back() <= 32) name.pop_back(); // Remove trailing whitespaces
        if(name == "***") {
            // End of input;  stop reading
            break;
        }
        // By here, 'name' stores the name of the candidate in the input

        // Use whichever data structure you want to solve the problem here!
    }
    // Your code here
}
