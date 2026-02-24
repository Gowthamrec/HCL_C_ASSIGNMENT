#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int *p = arr; p < arr + n; p++) {
        sum += *p;
    }
    float average = (float)sum / n;
    printf("Average = %.2f\n", average);
}