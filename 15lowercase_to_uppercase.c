#include<stdio.h>

int main(){
    char str[100];
    printf("Enter a string: "); 
    fgets(str, sizeof(str), stdin);
    int i = 0, j = 0;
    while (str[i] != '\0' && str[i] != '\n') {   
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("Uppercase string: %s", str);
}