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
    int a,b;   
    printf("Enter two integers: "); 
    scanf("%d %d", &a, &b);
    printf("Select operation: 1.Add 2.Subtract 3.Multiply 4.Divide\n");
    int c;
    scanf("%d", &c);
    switch (c) {
        case 1:
            printf("Result: %d\n", add(a, b));
            break;
        case 2:
            printf("Result: %d\n", sub(a, b));
            break;
        case 3:
            printf("Result: %d\n", mul(a, b));
            break;
        case 4:
            printf("Result: %d\n", div(a, b));
            break;
        default:
            printf("Invalid operation.\n");
    }
}
