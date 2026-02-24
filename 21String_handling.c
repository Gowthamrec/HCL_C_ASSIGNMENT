#include<stdio.h>

int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
int div(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Undefined.\n");
        return 0; 
    }
}

int main(){
    int a,b,c;
    int (*operation[4])(int, int) = {add, sub, mul, div};
    scanf("%d %d", &a, &b);
    printf("1.Add \n2.Subtract \n3.Multiply \n4.Divide\n");
    scanf("%d", &c);
    if (c >= 1 && c <= 4) {
        printf("Result = %d\n", operation[c - 1](a, b));
    } else {
        printf("Invalid choice.\n");
    }
}