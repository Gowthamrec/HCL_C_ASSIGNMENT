#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d", &n);    
    long x = n < 0 ? -(long)n : n; 
    int rev = 0;
    while (x != 0) {
        int d = x % 10;
        if (rev > (INT_MAX - d) / 10) {
            puts("overflow");
            return 0;
        }
        rev = rev * 10 + d;
        x /= 10;
    }
    printf("%d\n", n < 0 ? -rev : rev); 
}