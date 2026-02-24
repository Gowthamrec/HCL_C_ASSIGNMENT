#include<stdio.h>

int main(){
    char str[100],substr[100];
    fgets(str, sizeof(str), stdin);
    fgets(substr, sizeof(substr), stdin);
    int i, j;
    for(i=0; str[i] != '\0'; i++){
        //printf("i = %d\n", i);
        for(j=0; substr[j] != '\0'; j++) {
            if (str[i+j] != substr[j]) {
                break;
            }
            //printf("j = %d\n", j);
        }
        if (substr[j+1] == '\0') {
            printf("First occurrence at %d\n", i);
            return 0;
        }
    }
    printf("Not found\n");
    return 0;
}