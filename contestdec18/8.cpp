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
        int n,x,y;
        cin>>n>>x>>y;
        vector <int> v;
        v.reserve(n);
        int cnt =0;
        int a;
        for(int i = 0 ;i<n;i++){
            cin>>a;
            v.push_back(a);
        }
        for(int i = 0;i<n;i++){
            for(int j= 0;j<n;j++){
                if(v[i]>v[j]||v[i]<1||v[j]<1||v[j]>n||v[i]>n){
                    continue;
                }
                else{
                    int sum1=0;
                    vector <int> v2{v};
                    v2.erase(v2.begin()+i);
                    v2.erase(v2.begin()+j-1);
                    for(int k:v2){
                        sum1+=k;

                    }
                    if(sum1>=x&&sum1<=y){
                        cnt++;

                    }
                    }

        }
        }

        
        cout<<cnt<<endl;
    }
    return 0;
}