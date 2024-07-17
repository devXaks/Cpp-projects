#include<iostream>
using namespace std;
int main(){
    int x;
    float sum1=0;
    cout<<"Enter the first term of the series";
    cin>>x;
    for(float i = 1;i<=x;i++){
        sum1 = sum1 +(1/i);

    }
    cout<<"The sum of the series is: "<<sum1;
}