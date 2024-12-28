#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;

    while(tc--) {
        int n,m,k;
        cin>>n>>m>>k;

        vector<int> v1;
        unordered_set<int> v2;
        v1.reserve(m);
        int x;
        for(int i=0;i<m;i++) {
            cin>>x;
            v1.push_back(x);
        }
        for(int j=0;j<k;j++) {
            cin>>x;
            v2.insert(x);
        }
        if(n>k+1) {
            for(int i=0;i<m;i++) {
                cout<<0;
            }
            cout<<endl;
            continue;
        }
        if(m==k) {
            for(int i=0;i<m;i++) {
                cout<<1;
            }
            cout<<endl;
            continue;
        }
        int flag=0;

        for(int c:v1) {
            flag=0;
            if(v2.find(c)!=v2.end()) {
                cout<<0;
                flag=1;
            }
            if(flag==0) {
                cout<<1;
            }
        }
        cout<<endl;
    }
    return 0;
}