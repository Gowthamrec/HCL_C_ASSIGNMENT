#include<stdio.h>
#include<string.h>
struct product {
    float price;
    float discount;
};

int main(){
    struct product p1;
    p1.price = 100.0;
    p1.discount = 10.0;
    float discounted_price = p1.price - (p1.price * p1.discount / 100);
    printf("Discounted price(value): %.2f\n", discounted_price);
    p1.price = discounted_price; 
    printf("Updated price(address): %.2f\n", p1.price);
    return 0;
}