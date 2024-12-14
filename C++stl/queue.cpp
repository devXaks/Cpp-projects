#include<iostream>
using namespace std;
struct stk{
        int rear;
        int size;
        int *arrptr;
        int front;
        
    };

void push_stk(struct stk *s0)
{
    if(s0->rear == s0->size -1){
        cout<<"Queue overflow"<<endl;
    }
    else{
        int element;
        cout<<"Enter the element ";
        cin>>element;
        s0->rear++;
        s0->arrptr[s0->rear] = element;
    }
    
}

void pop_stk(struct stk *s0){
if(s0->front == s0->rear){
    cout<<"Noting to pop, stack emepty";
}
else{
    s0->front++;

    cout<<s0->arrptr[s0->front]<<endl;
}

}

void print_stk(struct stk s0){

    if(s0.rear == -1){
        cout<<"Stack Empty"<<endl;
        return;
    }
    for(int i = s0.front+1;i<=s0.rear;i++){
        cout<<s0.arrptr[i]<<" , ";
    }
    cout<<endl;
}


int main(){
    struct stk s1;
    int choice;


    cout<<"Enter the size of the array";
    cin>>s1.size;
    s1.front = -1;
    s1.rear = -1;
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