#include <iostream>

using namespace std; 

int main(){
    int x;
    cin>>x;
    int cnt = 1;
    for(int i =1 ;i<=x;i++ ){
        for(int j=1;j<=i;j++){
            cout<<cnt<<" ";
            cnt++;
        }
        cout<<endl;

    }
    return 0;
}