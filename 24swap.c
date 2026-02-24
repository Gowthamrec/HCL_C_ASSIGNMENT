#include<stdio.h>

int main(){
    int a, b;   
    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);    
    printf("Before swap: a = %d, b = %d\n", a, b);
    int *ptrA = &a;
    int *ptrB = &b;
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
    printf("After swap: a = %d, b = %d\n", a, b);
    
}