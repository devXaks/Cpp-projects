#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  


    int x,y;
    cin>>x>>y;
    if(x+y>=1000){
        cout<<700;
    } 
    else{
        cout<<x+y;
    }
    return 0;
}
