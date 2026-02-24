#include<stdio.h>

int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    //printf("Palindrome: %s\n", str);
    int i = 0, j = 0;
    while (str[j] != '\0' && str[j] != '\n') {   
        j++;
    }
    //printf("Length of the string: %d\n", j);
    while (i<j)
    {
        if (str[i] != str[j-1]) {
            printf("Not Palindrome\n");
            return 0;
        }
        i++;
        j--;
    }
    printf("Palindrome\n");
    return 0;
}