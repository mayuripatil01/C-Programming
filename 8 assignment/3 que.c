//Q3. Find Sum of All Numbers

#include <stdio.h>

int findSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return sum;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Sum = %d\n", findSum(arr, 5));
    return 0;
}