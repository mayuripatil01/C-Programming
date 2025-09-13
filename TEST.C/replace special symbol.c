// write a program to accept string frome user and replace one  character frome special symbol



#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch, symbol;
    int i;

    // Accept string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // remove newline

    // Character to replace
    printf("Enter character to replace: ");
    scanf(" %c", &ch);

    // Special symbol to replace with
    printf("Enter special symbol: ");
    scanf(" %c", &symbol);

    // Replace occurrences
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            str[i] = symbol;
        }
    }

    printf("Modified string: %s\n", str);

    return 0;
}