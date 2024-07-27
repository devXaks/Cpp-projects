#include <iostream>

using namespace std; 

int main(){
    int chr = 'A';
    int row = 1;
    int col =1;
    int num ;
    cin>> num;
    while(row<=num){
        col =1;
        while(col<=num){
            cout<<char(chr)<<" ";
            chr++;
            col++;

        }
        row++;
        cout<<"\n";
    }


    return 0;
}