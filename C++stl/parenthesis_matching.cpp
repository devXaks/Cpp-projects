#include<iostream>
using namespace std;



struct parentesis{
    char* ptr;
    int top;
    int size;
};

void push_s0(parentesis *s1,char s){
    s1->top++;
    s1->ptr[s1->top] = s;

}

void pop_s0(parentesis *s1,char s){
    if(s1->top == -1){
        cout<<"Invalid Parenthesis Matching paramenters";
        exit(0);
    }

    else{
        if(s < 50){
            if(s1->ptr[s1->top] == s-1)
            {s1->top--;}
            else{
                cout<<"Parenthesis syntax invalid";
                exit(0);
            }

        }
        else {
            if(s1->ptr[s1->top] == s-2)
            {s1->top--;}
            else{
                cout<<"Parenthesis syntax invalid";
                exit(0);
            }
            
        }
    }
}


int main(){
    struct parentesis s1;

    string s0 = "[4+}2-(3-2){]";
    // cin
    for(int i = 0;s0[i] !=0 ;i++){
        if(s0[i] == '('||s0[i] == '{'||s0[i] == '[' ){
        push_s0(&s1,s0[i]);
        }

        else if(s0[i] == ')'||s0[i] == ']'||s0[i] == '}' ){
        pop_s0(&s1,s0[i]);
        }

    
    }

    return 0;
}