// assignment no 10 
#include <stdio.h>
#include <ctype.h>

// a. mystrcpy
char* mystrcpy(char dest[], const char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

// b. mystrlen
int mystrlen(const char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// c. mystrcmp
int mystrcmp(const char s1[], const char s2[]) {
    int i = 0;
    while (s1[i] != '\0' && s1[i] == s2[i]) {
        i++;
    }
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}

// d. mystrcat
char* mystrcat(char dest[], const char src[]) {
    int i = 0, j = 0;
    while (dest[i] != '\0') i++;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++; j++;
    }
    dest[i] = '\0';
    return dest;
}

// e. mystrncpy
char* mystrncpy(char dest[], const char src[], int n) {
    int i = 0;
    while (i < n && src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

// f. mystrupper
void mystrupper(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

// g. mystrlower
void mystrlower(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

// h. mystrrev
void mystrrev(char str[]) {
    int i = 0, j = mystrlen(str) - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++; j--;
    }
}

// i. mystrstr
char* mystrstr(const char haystack[], const char needle[]) {
    int i, j;
    if (needle[0] == '\0') return (char*)haystack;
    for (i = 0; haystack[i] != '\0'; i++) {
        for (j = 0; needle[j] != '\0'; j++) {
            if (haystack[i + j] != needle[j]) break;
        }
        if (needle[j] == '\0') return (char*)&haystack[i];
    }
    return NULL;
}

// j. mystrcasecmp
int mystrcasecmp(const char s1[], const char s2[]) {
    int i = 0;
    while (s1[i] != '\0' && tolower(s1[i]) == tolower(s2[i])) {
        i++;
    }
    return tolower((unsigned char)s1[i]) - tolower((unsigned char)s2[i]);
}

// k. mystrchr
char* mystrchr(const char str[], int ch) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) return (char*)&str[i];
    }
    return NULL;
}

// l. mystrrchr
char* mystrrchr(const char str[], int ch) {
    int last = -1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) last = i;
    }
    return (last != -1) ? (char*)&str[last] : NULL;
}

// m. mystrncmp
int mystrncmp(const char s1[], const char s2[], int n) {
    int i = 0;
    while (i < n && s1[i] != '\0' && s1[i] == s2[i]) {
        i++;
    }
    if (i == n) return 0;
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}

// n. mystrnstr
char* mystrnstr(const char haystack[], const char needle[], int n) {
    int i, j, needleLen = mystrlen(needle);
    for (i = 0; i <= n - needleLen; i++) {
        for (j = 0; j < needleLen; j++) {
            if (haystack[i + j] != needle[j]) break;
        }
        if (j == needleLen) return (char*)&haystack[i];
    }
    return NULL;
}

// o. mystrncat
char* mystrncat(char dest[], const char src[], int n) {
    int i = 0, j = 0;
    while (dest[i] != '\0') i++;
    while (j < n && src[j] != '\0') {
        dest[i] = src[j];
        i++; j++;
    }
    dest[i] = '\0';
    return dest;
}

// p. mystrncasecmp
int mystrncasecmp(const char s1[], const char s2[], int n) {
    int i = 0;
    while (i < n && s1[i] != '\0' && tolower(s1[i]) == tolower(s2[i])) {
        i++;
    }
    if (i == n) return 0;
    return tolower((unsigned char)s1[i]) - tolower((unsigned char)s2[i]);
}

// Main for testing
int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";

    printf("mystrlen: %d\n", mystrlen(str1));
    printf("mystrcmp: %d\n", mystrcmp("abc", "abd"));
    mystrcat(str1, str2);
    printf("mystrcat: %s\n", str1);
    mystrcpy(str2, "Test");
    printf("mystrcpy: %s\n", str2); 
    mystrupper(str2);
    printf("mystrupper: %s\n", str2);
    mystrlower(str2);
    printf("mystrlower: %s\n", str2);
    mystrrev(str2);
    printf("mystrrev: %s\n", str2);
    printf("mystrstr: %s\n", mystrstr("Hello World", "World"));
    printf("mystrcasecmp: %d\n", mystrcasecmp("HELLO", "hello"));
    printf("mystrchr: %s\n", mystrchr("Hello", 'e'));
    printf("mystrrchr: %s\n", mystrrchr("Hello", 'l'));
    printf("mystrncmp: %d\n", mystrncmp("abc", "abd", 2));
    printf("mystrnstr: %s\n", mystrnstr("HelloWorld", "lo", 7));
    mystrncpy(str1, "Example", 4);
    printf("mystrncpy: %s\n", str1);
    mystrncat(str1, "Test", 2);
    printf("mystrncat: %s\n", str1);
    printf("mystrncasecmp: %d\n", mystrncasecmp("HELLO", "heLLo", 5));

    return 0;
}