#include <iostream>
using namespace std;

struct queue{
    int front;
    int rear;
    int *arrptr;
    int size;
};

void push_queue(struct queue *s1){
    if((s1->rear +1)%s1->size == s1->front){
        cout<<"Queue is full"<<endl;
    }
    else{
        s1->rear = (s1->rear +1)%s1->size;
        cout<<"Enter the element to be pushed"<<endl;
        cin>>s1->arrptr[s1->rear];

    }
}

void pop_queue(struct queue *s1){
    if(s1->front == s1->rear){
        cout<<"Queue is empty"<<endl;
    }
    else{
        s1->front = (s1->front +1)%s1->size;

        cout<<"Element popped is "<<s1->arrptr[s1->front]<<endl;
        // s1->front = (s1->front +1)%s1->size;

    }
}

void display_queue(struct queue s1){
    if(s1.front == s1.rear){
        cout<<"Queue is empty"<<endl;
    }
    else{
        int i;
        for(i = s1.front+1; i!= s1.rear; i = (i+1)%s1.size){
            cout<<s1.arrptr[i]<<" ";
        }
        cout<<s1.arrptr[i]<<" ";

}
cout<<endl;
}


int main(){
    struct queue s1;
    cout<<"Enter the size : ";
    cin>>s1.size;
    s1.arrptr = (int *)malloc(sizeof(int)*(s1.size));
    s1.front = 0;
    s1.rear = 0;
    int choice;
    while(1){
        cout<<"Enter choice 0:Push an element 1:Pop an element 2:Display queue 3:Exit :";
        cin>>choice;

        if(choice == 0){
            push_queue(&s1);
        }
        else if(choice == 1){
            pop_queue(&s1);
        }
        else if(choice == 2){
            display_queue(s1);
        }
        else{
            exit(0);
        }

    }
        
    return 0;
}