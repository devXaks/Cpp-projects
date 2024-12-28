#include <iostream>
#include <vector>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    int tc;
    cin>>tc;

    while (tc--) {
        int vsize;
        cin>>vsize;
        vector <int> v1;
        vector <int> v2;
        v1.reserve(vsize);
        v2.reserve(vsize);
        int x;
        int sum1 = 0;
        int sum2 = 0 ;

        for(int i = 0;i<vsize;i++){
            cin>>x;
            v1.push_back(x);
        }
        for(int i = 0;i<vsize;i++){
            cin>>x;
            v2.push_back(x);
        }
        for(int j =0;j<vsize -1;j++){
            if(v1[j]>v2[j+1]){
                sum1 += v1[j];
                sum2 +=v2[j+1];
            }

        }
        sum1+= v1[vsize -1];
        cout<<sum1-sum2<<endl;

  
    }



    return 0;
}