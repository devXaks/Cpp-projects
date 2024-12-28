#include <iostream>
#include <vector>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    int tc;
    cin>>tc;

    while (tc--) {
        long long int n,a,b,c;
        cin>>n>>a>>b>>c;
        long long int sum1 = 0;
        long long int cnt = 0;
        int i = 0;


        while(sum1< n){
            if(i == 0){
                sum1+= a;

            }
            else if(i == 1){
                sum1+=b;
            }
            else{
                sum1+=c;
            }
            cnt++;
            i = (i+1)%3;
        }
        cout<<cnt<<endl;

  
    }



    return 0;
}