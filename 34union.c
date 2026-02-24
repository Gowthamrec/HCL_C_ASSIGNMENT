//Create a union Data that can store either an integer, float, or string. Demonstrate how memory usage differs from a structure.

#include<stdio.h>
#include<string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;
    data.i = 10;
    printf("Integer: %d\n", data.i);
    data.f = 3.14;
    printf("Float: %.2f\n", data.f);
    strcpy(data.str, "Hello");
    printf("String: %s\n", data.str);
    printf("Size: %lu\n", sizeof(data));
    return 0;
}