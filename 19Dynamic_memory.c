#include<stdio.h>

int main(){
    int n1;
    int arr1[100];
    int n2;
    int arr2[100];
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    int merge[200];
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merge[k] = arr1[i];
            i++;
            k++;
        } 
        else if (arr1[i] > arr2[j]) {
            merge[k] = arr2[j];
            j++;
            k++;
        }
        else {
            merge[k] = arr1[i];
            k++;
            merge[k] = arr2[j];
            k++;
            i++;
            j++;
        }
    }
    while (i < n1) {
        merge[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n2) {
        merge[k] = arr2[j];
        j++;
        k++;
    }
    for(int i = 0; i < k; i++) {
        printf("%d ", merge[i]);
    }
    return 0;
}