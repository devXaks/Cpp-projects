#include <iostream>

using namespace std; 

int main(){
   int num1;
   int num2 = 0;
   cin>>num1;
   int ctr = 1;
   while(num1!=0){
    num2 = num2*10 + num1%10;
    num1/=10;

   }
   cout<<num2;
   return 0;
}