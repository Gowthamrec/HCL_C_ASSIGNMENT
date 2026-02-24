#include<stdio.h>

int main(){
    int arr[9][9];
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int valid = 1;
    for(int i = 0; i < 9; i++) {
        int row[10] = {0};
        int col[10] = {0};
        for(int j = 0; j < 9; j++) {
            if(arr[i][j] < 1 || arr[i][j] > 9 || row[arr[i][j]] == 1) {
                valid = 0;
                break;
            }
            row[arr[i][j]] = 1;
            if(arr[j][i] < 1 || arr[j][i] > 9 || col[arr[j][i]] == 1) {
                valid = 0;
                break;
            }
            col[arr[j][i]] = 1;
        }
        if(!valid) {
            break;
        }
    }
    if(valid) {
        printf("unique \n");
    } else {
        printf("not unique \n");
    }
    return 0;
}