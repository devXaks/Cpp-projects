#include<iostream>
using namespace std;
int main(){
    int a = 4;
    int d=40;
    int e= 60;
    int *p = &a;
    int *c = &d;
    int *b = &e;
    cout<<&a<<" p =  "<<&p<<" c = "<<&c<<" e = "<<&b;

}