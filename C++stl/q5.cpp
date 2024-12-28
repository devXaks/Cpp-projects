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
    int arr[x];
    for(int i =0 ;i<x;i++){
        cin>>arr[i];
    }
    int sum1,sum2;
    for(int j = 1;j<x-1;j++){

        if(x==2)
        sum1 = 0;
        sum2 = 0;
        for(int k = 0 ;k<j;k++){
            sum1+= arr[k];
            
        }
        for(int l = j+1;l<x;l++){
            sum2 += arr[l];
        }
        
        if(sum1==sum2){
        cout<<j;
        return 0;
            }
    }
    
    cout<<-1;
}
