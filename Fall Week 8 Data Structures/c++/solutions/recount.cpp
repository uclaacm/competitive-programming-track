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
    int votes_cast = 0;
    map<string, int> counts;
    string name;
    while(true){
        getline(cin, name);
        while(name.back() <= 32) name.pop_back(); // Remove trailing whitespaces
        if(name == "***") {
            // End of input;  stop reading
            break;
        }
        // By here, 'name' stores the name of the candidate in the input
        counts[name]++;
        votes_cast++;
    }
    int max_value = 0;
    string max_key = "Runoff!";
    for(auto [key, value] : counts){
        if(value == max_value){
            // If we see the same maximum value, we have a tie
            // So we should print "Runoff!" at the end
            max_key = "Runoff!"; 
        }else if(value > max_value){
            max_value = value;
            // Otherwise, we should print the name of the candidate with the most votes
            max_key = key;
        }
    }
    cout << max_key << endl;
}
