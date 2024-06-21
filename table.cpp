#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Kiski table likhni hai ? ";
    cin>>x;

    //Using for loop
    /*
    for(int i = 1;i<=10;i++){
        cout<<x<<" * "<<i<<" = " << x*i<<endl;
    }
    */


   //Using while loop
   /*
   int i= 1;
   while(i<=10){
        cout<<x<<" * "<<i<<" = " << x*i<<endl;
        i++;
    
   }
   */
  int i =1;
  do {
        cout<<x<<" * "<<i<<" = " << x*i<<endl;
        i++;  
  }while (i<=10) ;

    return 0;
}