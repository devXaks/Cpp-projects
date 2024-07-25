#include <iostream>

using namespace std; 

int main(){
    int x;
    cin>>x;
    int cnt;
    for(int i=1;i<=x;i++){
        cnt = i;
        for(int j=1;j<=i;j++){
            cout<<cnt<<" ";
            cnt++;
        }
        cout<<"\n";
    }
    return 0;
}