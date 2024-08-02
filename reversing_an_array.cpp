#include <iostream>

using namespace std; 

void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        swap(arr[i], arr[size - i - 1]);
    }
}

int main() {
    int arr[20];
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    reverseArray(arr, size);

    cout<<"Reversed array: ";
    for (int j = 0; j < size; ++j) {
        cout << arr[j] << " ";
    }
    cout << endl;

    return 0;
}
