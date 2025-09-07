//Q4. Find Odd and Even Numbers

#include <stdio.h>

void printOddEven(int arr[], int n) {
    printf("Even: ");
    for (int i = 0; i < n; i++) if (arr[i] % 2 == 0) printf("%d ", arr[i]);

    printf("\nOdd: ");
    for (int i = 0; i < n; i++) if (arr[i] % 2 != 0) printf("%d ", arr[i]);
}

int main() {
    int arr[5] = {11, 20, 7, 8, 5};
    printOddEven(arr, 5);
    return 0;
}