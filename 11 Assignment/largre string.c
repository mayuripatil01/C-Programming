//largre string without built in  function
#include <stdio.h>
int length(char str[]) {
    int i=0;
    while(str[i]!='\0') i++;
    return i;
}

int main() {
    char str1[100], str2[100];
    int l1, l2;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    l1 = length(str1);
    l2 = length(str2);

    if(l1 > l2)
        printf("Larger string: %s\n", str1);
    else if(l2 > l1)
        printf("Larger string: %s\n", str2);
    else
        printf("Both strings are equal length.\n");

    return 0;
}