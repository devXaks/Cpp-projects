#include <iostream>
#include <vector>
using namespace std;
void gen_perm(int n, int k) {
    vector<int> perm;

    for (int i = k; i<= n; i++) {
        perm.push_back(i);
    }
    for (int i = k-1; i >0; i--) {
        perm.push_back(i);
    }


    for (int i = 0; i < n; i++) {
        cout<<perm[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int tc;
    cin>>tc;

    while (tc--) {
        int n,k;
        cin>>n>>k;
        gen_perm(n,k);
    }

    return 0;
}