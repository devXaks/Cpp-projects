#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

    int x;
    cin>>x;
    int sum =0;
    if(x%2== 0){
    for(int i= 0 ;i<x/2;i++){
        sum+=(1+x);
    } 
    } 
    else{
        for(int i= 0 ;i<x/2;i++){
        sum+=(1+x);
    }
    sum +=x/2+1;

    }
    cout<<sum;
    return 0;
}
