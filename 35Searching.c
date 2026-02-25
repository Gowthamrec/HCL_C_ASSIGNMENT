#include<stdio.h>

int mian(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            printf("Element found at %d\n",i);
            return 0;
        }
    }
    printf("Element not found\n");
}