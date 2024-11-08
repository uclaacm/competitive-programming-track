#include <iostream>
using namespace std;

int main(void) {
    int T,N;
    cin>>T;
    for (int i = 0; i<T; i++) {
        cin>>N;
        string row1, row2;
        cin>>row1>>row2;
        bool flag = false;
        for (int i = 0; i<N; i++) {
            if ((row1[i] == '1') && (row2[i] == '1')) {
                flag = true;
                break;
            }
        }
        if (flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
