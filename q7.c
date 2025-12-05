#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isPalindrome(char s[], int start, int end) {
    if (start >= end)
        return 1;

    if (tolower(s[start]) != tolower(s[end]))
        return 0;

    return isPalindrome(s, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str, 0, strlen(str) - 1))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
