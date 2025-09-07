// 1 question
#include <stdio.h>
#include <math.h>

int main() {
    int n, i, temp, sum, digit, count;
    printf("Enter range n: ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d:\n", n);
    for (i = 1; i <= n; i++) {
        temp = i;
        sum = 0;
        count = 0;

        // count digits
        int t = i;
        while (t > 0) { count++; t /= 10; }

        temp = i;
        while (temp > 0) {
            digit = temp % 10;
            sum += pow(digit, count);
            temp /= 10;
        }
        if (sum == i)
            printf("%d ", i);
    }
    return 0;
}