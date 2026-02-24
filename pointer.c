#include<stdio.h>

int main(){
    int x =10;
    int *ptr = &x; 
    printf("Value of x: %d\n", x); 
    *ptr = 20;
    printf("Value of x after modifying through pointer: %d\n", x); // still prints 10, ptr is now pointing to a different value
}