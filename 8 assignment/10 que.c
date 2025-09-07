//Q10. Sort Array

#include <stdio.h>

void sortArray(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[5] = {12, 5, 7, 20, 3};
    sortArray(arr, 5);

    for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
    return 0;
}
