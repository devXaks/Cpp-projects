#include<iostream>
using namespace std;
int main(){
    int x;
    int sumeve = 0;
    int sumodd = 0;
    int eve;
    int odd;        
    cout<<"Enter how many numbers you need to enter  : ";
    cin>>x;
    

    for(int i  =1;i<=x;i++){
        cout<<"Enter the no : ";
        if(i%2==0){
            cin>>eve;
            sumeve = sumeve+eve;
            
        }
        else{
            cin>>odd;
            sumodd = sumodd+odd;
        }

    }
    cout<<"The sum of odd numbers is "<<sumodd<<endl;
    cout<<"The sum of even numbers is "<<sumeve<<endl;
    
}