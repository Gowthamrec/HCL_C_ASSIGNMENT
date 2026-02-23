#include<stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        char c = (ch >= 'a' && ch <= 'z') ? ch - ('a' - 'A') : ch;
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            printf("vowel\n");
        } else {
            printf("consonant\n");
        }
    } else if (ch >= '0' && ch <= '9') {
        printf("digit\n");
    } else {
        printf("special symbol\n");
    }
}