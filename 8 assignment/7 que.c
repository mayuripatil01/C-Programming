//Q7. Add Two Arrays into Third Array

#include <stdio.h>

void addArrays(int a[], int b[], int c[], int n) {
    for (int i = 0; i < n; i++)
        c[i] = a[i] + b[i];
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5] = {10, 20, 30, 40, 50};
    int crr[5];
    addArrays(arr, brr, crr, 5);

    for (int i = 0; i < 5; i++) printf("%d ", crr[i]);
    return 0;
}