#include<stdio.h>
#include<string.h>
struct Customer {
    char name[20];
    char email[30];
};

struct Item {
    int id;
    char name[20];
    float price;
};

struct Order {
    struct Customer customer;
    struct Item item;
};

int main() {
    struct Order order;
    strcpy(order.customer.name, "Gowtham");
    strcpy(order.customer.email, "Gowtham@gmail.com");
    order.item.id = 101;
    strcpy(order.item.name, "Laptop");
    order.item.price = 100000;
    printf("%s\n", order.customer.name);
    printf("%s\n", order.customer.email);
    printf("%d\n", order.item.id);
    printf("%s\n", order.item.name);
    printf("%.2f\n", order.item.price);
    return 0;
}