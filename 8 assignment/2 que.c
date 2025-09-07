//Q2. Search a Number in Array

#include <stdio.h>

void searchNumber(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("%d found at position %d\n", key, i);
            return;
        }
    }
    printf("%d not found\n", key);
}

int main() {
    int arr[5] = {10, 25, 7, 30, 15};
    searchNumber(arr, 5, 7);
    return 0;
}
