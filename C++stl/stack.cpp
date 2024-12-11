#include<iostream>
using namespace std;
struct stk{
        int top;
        int size;
        int *arrptr;
        
    };

void push_stk(struct stk *s0)
{
    if(s0->top == s0->size -1){
        cout<<"Stack overflow"<<endl;
    }
    else{
        int element;
        cout<<"Enter the element ";
        cin>>element;
        s0->top++;
        s0->arrptr[s0->top] = element;
    }
    
}

void pop_stk(struct stk *s0){
if(s0->top == -1){
    cout<<"Noting to pop, stack emepty";
}
else{
    cout<<s0->arrptr[s0->top]<<endl;
    s0->top--;
}

}

void print_stk(struct stk s0){

    if(s0.top == -1){
        cout<<"Stack Empty"<<endl;
        return;
    }
    for(int i = 0;i<=s0.top;i++){
        cout<<s0.arrptr[i]<<" , ";
    }
    cout<<endl;
}


int main(){
    struct stk s1;
    int choice;


    cout<<"Enter the size of the array";
    cin>>s1.size;
    s1.top = -1;
    s1.arrptr = new int[s1.size];

    cout<<"Enter your choice  0 to push , 1 to pop, 2 to print stack 3 to exit";
    cin>>choice;
    
    while (choice!=3)
    {
        if(choice == 0){
            push_stk(&s1);

        }

        else if(choice == 1){
            pop_stk(&s1);
        }

        else if(choice == 2){
            print_stk(s1);

        }
    cout<<"Enter your choice  0 to push , 1 to pop, 2 to print stack";
    cin>>choice;
        }
        
    

    return 0;
}