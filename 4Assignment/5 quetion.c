//5 quetion
#include <stdio.h>

int reverse(int n) {
    int rev=0;
    while (n>0) {
        rev = rev*10 + n%10;
        n/=10;
    }
    return rev;
}

int main() {
    int choice, n, i, flag=1, sum=0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nMenu:\n");
    printf("1. Check Even/Odd\n");
    printf("2. Check Prime\n");
    printf("3. Check Palindrome\n");
    printf("4. Check Positive/Negative/Zero\n");
    printf("5. Reverse Number\n");
    printf("6. Sum of Digits\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            if (n%2==0) printf("Even\n");
            else printf("Odd\n");
            break;

        case 2:
            flag=1;
            for (i=2; i<=n/2; i++) {
                if (n%i==0) { flag=0; break; }
            }
            if (n>1 && flag) printf("Prime\n");
            else printf("Not Prime\n");
            break;

        case 3:
            if (n == reverse(n)) printf("Palindrome\n");
            else printf("Not Palindrome\n");
            break;

        case 4:
            if (n>0) printf("Positive\n");
            else if (n<0) printf("Negative\n");
            else printf("Zero\n");
            break;

        case 5:
            printf("Reverse = %d\n", reverse(n));
            break;

        case 6:
            temp=n; sum=0;
            while (temp>0) { sum+=temp%10; temp/=10; }
            printf("Sum of digits = %d\n", sum);
            break;

        default:
            printf("Invalid choice\n");
    }
    return 0;
}