#include <iostream>
using namespace std;

struct stkll {
    int data;
    stkll* ptr;  // Points to the next element in the stack
};

void push_stk(stkll** top) {
    int num;
    cout << "Enter value to push: ";
    cin >> num;

    // Allocate new node
    stkll* t = new stkll;
    t->data = num;
    t->ptr = *top; // Link to the previous top
    *top = t;  // Update the top of the stack
}

void pop_stk(stkll** top) {
    if (*top == nullptr) {
        cout << "Stack is empty." << endl;
        return;
    }
    stkll* temp = *top;
    *top = temp->ptr;  // Move the top to the next element
    delete temp;  // Deallocate the old top
}

void prntstk(stkll* top) {
    if (top == nullptr) {
        cout << "Stack is empty." << endl;
        return;
    }
    cout << "Stack contents: ";
    stkll* current = top;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->ptr;  // Move to the next node
    }
    cout << endl;
}

int main() {
    stkll* top = nullptr;  // Stack is initially empty
    int choice;

    cout << "Enter your choice: 0 to push, 1 to pop, 2 to print stack, 3 to exit: ";
    cin >> choice;

    while (choice != 3) {
        if (choice == 0) {
            push_stk(&top);  // Push a new element onto the stack
        } else if (choice == 1) {
            pop_stk(&top);  // Pop the top element from the stack
        } else if (choice == 2) {
            prntstk(top);  // Print the stack
        } else {
            cout << "Invalid choice!" << endl;
        }

        cout << "Enter your choice: 0 to push, 1 to pop, 2 to print stack, 3 to exit: ";
        cin >> choice;
    }

    return 0;
}
