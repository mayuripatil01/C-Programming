//Q9. Reverse Array

#include <stdio.h>

void reverseArray(int arr[], int n) {
    for (int i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    reverseArray(arr, 5);
    return 0;
}