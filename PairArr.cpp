#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15, 20, 25}; // Example array
    int target = 15;                // Target sum
    int size = 5;                   // Size of the array

    cout << "Pairs with sum " << target << ":" << endl;

    // Loop through all pairs in the array
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }

    return 0;
}