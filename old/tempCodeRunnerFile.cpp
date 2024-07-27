#include <iostream>

using namespace std; 

int main(){
    int row = 1;
    int clmn =1;
    int num;
    int chr;
    cin>>num;

    while(row<=num){
        chr = 'A';
        clmn = 1;

        while(clmn<= num){
            cout<<char(chr)<<" ";
            clmn++;


            chr++;
            

        }
        row++;
        cout<<"\n";

    }
    return 0;
}