//Q8. Merge Two Arrays

#include <stdio.h>

void mergeArrays(int a[], int b[], int c[], int n1, int n2) {
    for (int i = 0; i < n1; i++) c[i] = a[i];
    for (int j = 0; j < n2; j++) c[n1 + j] = b[j];
}

int main() {
    int arr[3] = {1, 2, 3};
    int brr[3] = {4, 5, 6};
    int crr[6];
    mergeArrays(arr, brr, crr, 3, 3);

    for (int i = 0; i < 6; i++) printf("%d ", crr[i]);
    return 0;
}