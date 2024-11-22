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

int main()
{
    int n;
    string s;
    cin >> n;
    if (n == 0)
    {
        cout << "Valid";
        return 0;
    }
    cin >> s;

    int bracketMap[128];
    bracketMap['('] = 0; bracketMap[')'] = 5;
    bracketMap['['] = 1; bracketMap[']'] = 4;
    bracketMap['{'] = 2; bracketMap['}'] = 3;

    stack<char> st;
    bool flag = true;

    for (int i = 0; i < n; i++)
    {
        char curr = s[i];
        if (curr == '(' || curr == '[' || curr == '{')
            st.push(curr);
        else
        {
            if (st.empty() || (bracketMap[st.top()] + bracketMap[curr]) % 5 != 0)
            {
                flag = false;
                break;
            }
            else
                st.pop();
        }
    }

    if (st.empty() && flag)
        cout << "Valid";
    else
        cout << "Invalid";

    return 0;
}
