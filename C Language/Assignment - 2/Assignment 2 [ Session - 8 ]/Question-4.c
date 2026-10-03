// Build a function formatPrice that takes a price in rupees and returns a string formatted like Flipkart's price tag (e.g., '₹1,599'). Use this function to display prices for three different products.

#include <stdio.h>

void formatPrice(int price){
    if(price >= 1000){
        printf("Rs. %d,%03d\n",price /1000, price % 1000);
    }else{
        printf("Rs. %d\n",price);
    }
}

void main(){
    formatPrice(99);
    formatPrice(199);
    formatPrice(1199);
    formatPrice(11999);
}