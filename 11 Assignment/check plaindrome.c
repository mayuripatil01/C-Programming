//check palindrome number
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, len, flag=1;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for(i=0; i<len/2; i++) {
        if(str[i] != str[len-1-i]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("String is Palindrome\n");
    else
        printf("String is Not Palindrome\n");

    return 0;
}