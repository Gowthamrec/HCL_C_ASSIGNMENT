//Implement strcpy safely (bounded copy) and discuss buffer overflow risks.
#include<stdio.h>

int main(){
    char str1[100];
    fgets(str1, sizeof(str1), stdin);
    int n;
    scanf("%d", &n);
    int i = 0;
    char dest[n];
    if(n<100){
        while (i < n) {   
            dest[i] = str1[i];
            i++;
        }
    }
    dest[i] = '\0';
    printf("Copied string: %s\n", dest);
}