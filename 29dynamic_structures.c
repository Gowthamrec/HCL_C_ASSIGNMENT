//Allocate memory dynamically for struct Item array based on user input size. Implement add and delete operations safely.
#include<stdio.h>
#include<stdlib.h>

struct Item {
    int id;
    char name[20];
    float price;
};

int main(){
    int n;
    scanf("%d", &n);
    struct Item *items = malloc(n * sizeof(struct Item));
    if (items == NULL) {
        printf("failed\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Item %d: ", i + 1);
        scanf("%d %s %f", &items[i].id, items[i].name, &items[i].price);
    }
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Price: %.2f\n", items[i].id, items[i].name, items[i].price);
    }
    free(items);
}   