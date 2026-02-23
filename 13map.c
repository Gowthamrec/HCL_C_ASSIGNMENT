//.Remove all occurrences of a given character from a string in-place.

#include<stdio.h>

int main(void) {
    char s[100];
    int c;
    fgets(s, sizeof(s), stdin);
    c = getchar();
    int i = 0, j = 0;
    while (s[i] != '\0') {
        if (s[i] != (char)c && s[i] != '\n') {
            s[j++] = s[i];
        }
        i++;
    }
    s[j] = '\0';
    puts(s);
    return 0;
}