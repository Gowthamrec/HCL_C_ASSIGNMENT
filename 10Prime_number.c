#include<stdio.h>

int prime(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int simple_prime_with_sqrt(int n) {
    if (n < 2) {
        return 0; 
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    // if (n < 2) {
    //     printf("%d is not a prime number.\n", n);
    // } else if (prime(n)) {
    //     printf("%d is a prime number.\n", n);
    // } else {
    //     printf("%d is not a prime number.\n", n);
    // }
    if (simple_prime_with_sqrt(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}