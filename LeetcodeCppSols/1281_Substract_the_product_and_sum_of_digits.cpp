#include <iostream>

using namespace std; 

int main(){
    int num;
    int sum1 = 0;
    int prdct=1;
    int digit;
    cin>>num;

    while (num)
    {
        digit = num%10;
        sum1+= digit;
        prdct *= digit;
        num=num/10; 
    }

    cout<<(prdct-sum1);
    
    return 0;
}