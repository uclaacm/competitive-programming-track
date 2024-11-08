#include <iostream>
using namespace std;

int main(void) {
    int N,D;
    string S;
    cin>>N>>D>>S;

    int frog = 0;
    int next_jump = -1;
    int num_jumps = 0;
    for (int i = 1; i<N+D; i++) {
        if (i-frog > D) {
            frog = next_jump;
            num_jumps++;
        }
        if (i-frog <= D) {
            if ((i<N) && (S[i] == '1'))
                next_jump = i;
        }
    }

    if (frog != N-1) cout<<-1<<endl;
    else cout<<num_jumps<<endl;

    return 0;
}
