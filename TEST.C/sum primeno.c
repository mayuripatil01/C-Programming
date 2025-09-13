// WRITE A PROGRAM TO PRINT SUM OF PRIME NUMBER IN A GIVEN RANGE


#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int start, end, sum = 0;

    // Input range
    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);

    // Calculate sum of primes
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }

    printf("Sum of prime numbers between %d and %d = %d\n", start, end, sum);

    return 0;
}