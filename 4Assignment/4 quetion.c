//4 quetion
#include <stdio.h>

int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

int main() {
    int n, i, temp, sum, digit;
    printf("Enter range n: ");
    scanf("%d", &n);

    printf("Strong numbers from 1 to %d:\n", n);
    for (i = 1; i <= n; i++) {
        temp = i; sum = 0;
        while (temp > 0) {
            digit = temp % 10;
            sum += fact(digit);
            temp /= 10;
        }
        if (sum == i) printf("%d ", i);
    }
    return 0;
}