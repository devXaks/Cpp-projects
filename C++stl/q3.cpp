#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stdio.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int x,y,z;
    float ans;
    cin>>x>>y>>z;  
ans = (1.0 / 2) * z * (y * y - x * x);
    printf("%.2f",ans);
    return 0;
}
