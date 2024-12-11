#include <iostream>
using namespace std;

struct stkll {
    int data;
    int* ptr;
};

void push_stk(int * ptr){
    ptr = (int*)malloc(sizeof(stkll));
}



int main(){

    int * ptr = nullptr;
    int choice;

    cout<<ptr;

    cout<<"Enter your choice  0 to push , 1 to pop, 2 to print stack 3 to exit";
    cin>>choice;

    
    while (choice!=3)
    {
        if(choice == 0){
            push_stk(*ptr);

        }

        else if(choice == 1){
            // pop_stk(*ptr);
        }

        else if(choice == 2){
            // print_stk(ptr);

        }
    cout<<"Enter your choice  0 to push , 1 to pop, 2 to print stack, 3 to exit";
    cin>>choice;
        }
        
    




    return 0;
}