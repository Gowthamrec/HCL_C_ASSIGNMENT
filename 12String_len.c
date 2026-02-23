#include<stdio.h>

int main() {
    char str[100];
    printf("String: ");
    fgets(str, sizeof(str), stdin);
    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    printf("Length of the string: %d\n", length);
    
    return 0;
}