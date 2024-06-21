#include<iostream>
using namespace std;

typedef struct student{
    
    int StdID;
    long long int MobNo;
    
}st;

int main(){

    st akshat;
    akshat.StdID = 1;
    akshat.MobNo = 6397652402;
    cout<< akshat.MobNo;

    return 0;


}