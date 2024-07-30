#include <iostream>
#include <math.h>
using namespace std; 

int main(){
    int x;
    cin>>x;
    int bnry=0;
    int cnt=0;
    while(x){

        bnry+=((x%2)*pow(10,cnt));
        cnt++;
        x/=2;
    }
    cout<<bnry;
    return 0;
}