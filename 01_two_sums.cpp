#include <iostream>
using namespace std;

void theFunct(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size;j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Found: " << arr[i] << " + " << arr[j] << " = " << target << endl;
                return; // Exiting after finding the first pair
            }
        }
    }
    cout << "No pair found" << endl;
}

int main() {
    int arr[] = {3,2,4};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array
    int target = 6;
    theFunct(arr, size, target);
    return 0;
}
