//Q6. Print Only Prime Numbers

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return false;
    return true;
}

void printPrimes(int arr[], int n) {
    for (int i = 0; i < n; i++)
        if (isPrime(arr[i])) printf("%d ", arr[i]);
}
int main() {
    int arr[6] = {2, 4, 5, 9, 11, 15};
    printPrimes(arr, 6);
    return 0;
}