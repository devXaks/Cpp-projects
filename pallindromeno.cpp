#include<iostream>
using namespace std;
int main(){
 int x,y;
 int sum = 0;
 cout<<"Enter the number to check for pallindrome :";
 cin>>x;
 y=x;
 while(x>0){
    sum=sum*10+x%10;
    x=x/10;
 }   

 if (y==sum){
    cout<<y<<" is a pallindrome no";
 }
 else{
    cout<<y<<" is not a pallindrome no";
 }
}