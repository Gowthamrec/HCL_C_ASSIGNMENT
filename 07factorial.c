#include<stdio.h>

int main() {
    int n, i;
    int factorial = 1;
    scanf("%d", &n);
    if (n < 0) {
        printf("defined.\n");
        return 1;
    }
    for (i = 1; i <= n; i++) {
        factorial = factorial * i;
    }
    printf("Factorial = %d\n",factorial);
    return 0;
}