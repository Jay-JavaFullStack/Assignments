// Create a function addToCart that takes a shopping cart array and a product name, adds the product to the cart, and prints the updated cart. Demonstrate how passing the cart array by reference allows changes to persist outside the function. Hint: In languages like JavaScript, arrays are passed by reference. In C/C++, use pointers for reference behavior.

#include <stdio.h>
#include <string.h>

void addToCart(char cart[100][100], int *count, char product[]){
    strcpy(cart[*count], product);
    (*count)++;

    int i;
    printf("Update Cart:\n");
    for(i = 0; i < *count; i++){
        printf("%d. %s\n", i + 1, cart[i]);
    }
}

void main(){
    char cart[100][100];
    int cartCount = 0;

    addToCart(cart, &cartCount, "Shoes");
    addToCart(cart, &cartCount, "T - Shirt");
    addToCart(cart, &cartCount, "Jeans");

    printf("\nFinal cart count in main: %d\n",cartCount);
}