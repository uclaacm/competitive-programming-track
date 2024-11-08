#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    long long N;
    int P[100001];
    bool visited[100001];
    cin>>N;
    for (int i = 1; i<=N; i++) {
        cin>>P[i];
        visited[i] = false;
    }

    vector<long long> loop_sizes;
    for (int start = 1; start<=N; start++) {
        long long loop_size = 0;
        for (int cur = start; !visited[cur]; cur = P[cur]) {
            loop_size++;
            visited[cur] = true;
        }
        if (loop_size) loop_sizes.push_back(loop_size);
    }

    int num_loops = loop_sizes.size();
    if (num_loops == 1) {
        cout<<N*N<<endl;
        return 0;
    }
    sort(loop_sizes.begin(), loop_sizes.end());
    loop_sizes[num_loops-2] += loop_sizes[num_loops-1];
    long long convenience = 0;
    for (int i = 0; i<num_loops-1; i++)
        convenience += loop_sizes[i]*loop_sizes[i];

    cout<<convenience<<endl;

    return 0;
}
