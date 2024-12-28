#include <stdio.h>
#include <stdlib.h>
struct stack
    {
        int top;
        int size;
        int* ptr;
        };
void push_stk(struct stack *s1){
    if(s1->top == s1->size){
        printf("Stack is full, Cant push");
    }
    else{
        printf("Enter the element to be pushed : ");
        scanf("%d",&(s1->ptr[s1->top]));
        s1->top++;
    }
}

void pop_stk(struct stack *s2){
    if(s2->top == -1){
        printf("Stack is empty");
    }
}

int main(){
    int choice;
    struct stack s1;

    printf("Enter the size of the array : ");
    scanf("%d",&(s1.size));
    s1.top = 0;
    s1.ptr = (int*)malloc((s1.size)*sizeof(int));

    while (1)
    {
        printf("Enter 0 to push to array, 1 to pop from array, 2 to display array, 3 to exit the program");
        scanf("%d",&choice);
        
        if(choice  == 0){
            push_stk(&s1);
        }
        else if(choice == 1){
            pop_stk(&s1);
        }
        else if(choice == 2){
            // display_stk(s1);
        }

    }
    


    return 0;
}