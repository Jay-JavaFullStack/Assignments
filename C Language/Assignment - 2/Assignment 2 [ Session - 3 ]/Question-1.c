// Declare variables for a Flipkart product: productName (as a string), price (float), and rating (double). Assign sample values and print each variable with its data type.

#include <stdio.h>

int main(){
    char productName [50] = "Iphone Charger";
    float price = 2199.99;
    double rating = 4.6;

    printf("Product Name (String) : %s\n",productName);
    printf("Price (Float) : %.2f\n",price);
    printf("Rating (Double) : %.1f\n",rating); 

    return 0;
}