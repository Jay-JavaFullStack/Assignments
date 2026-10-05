//Create a structure called FoodItem to store Zomato-style menu data: itemName (string), price (float), and rating (float). Initialize an array of 3 FoodItem variables with real menu items and display their details using a loop.

#include <stdio.h>

struct FoodItem{
    char itemName[100];
    float price;
    float rating;
};

void main(){
    struct FoodItem menu[3] = {
        {"Mysore Masala Dosa", 150, 4.8},
        {"Manchurian", 120, 4.2},
        {"Kaju Butter Masala With Naan", 350, 4.6}
    };

    int i;
    for(i = 0; i < 3; i++){
        printf("Item: %s\n", menu[i].itemName);
        printf("Price: %.2f\n", menu[i].price);
        printf("Rating: %.1f\n\n", menu[i].rating);
    }
}