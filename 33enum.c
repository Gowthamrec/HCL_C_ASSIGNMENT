#include<stdio.h>
#include<string.h>
enum status{PENDING = 2 ,SHIPPED = 0,DELIVERED = 1};
int main(){
    int n;
    scanf("%d",&n);
    for(int i =0 ;i<n;i++){
        //printf("%d",i);
        int a;
        scanf("%d",&a);
        // printf("%d",DELIVERED);

        switch (a){
            case SHIPPED:
                printf("in process\n");
                break;
            case DELIVERED:
                printf("completed\n");
                break;
            case PENDING:
                printf("wait\n");
                break;
            default:
                printf("error\n");
                break;
        }
    }
}