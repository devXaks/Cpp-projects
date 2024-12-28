#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int x,y,z;
    cin>>x>>y>>z;
    if(z<2023){
        cout<<"HAPPY";
    }

    else if(z>2024){
        cout<<"SAD";
    }
    else if(z == 2023  && y<11){
        cout<<"HAPPY";
    }
    else if(z == 2023 && y ==11 && x<19){
        cout<<"HAPPY";
    }
    else{
        cout<<"SAD";
    }
    
    
    return 0;
}
