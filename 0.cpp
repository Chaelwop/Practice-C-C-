#include <iostream>

int main() {
    int arr[] = {10, 324, 45, 90, 9808};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0]; // initialize max with the first element

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    std::cout << "Largest element in the array is: " << max << std::endl;

    return 0;
}
