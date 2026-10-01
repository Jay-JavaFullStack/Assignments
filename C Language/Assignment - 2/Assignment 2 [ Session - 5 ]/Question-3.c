//Create a Flipkart discount calculator that asks the user for the total cart amount. Use nested if statements to check: if amount > 2000, apply 20% discount; else if amount > 1000, apply 10% discount; else, no discount. Print the final amount to pay. Hint: Use nested ifs to check each discount slab.

#include <stdio.h>

void main(){
    float amount, discout, finalAmount;

    printf("Enter your cart value = ");
    scanf("%f",&amount);

    if(amount > 2000){
        discout = amount * 20 / 100;
    }else{
        if(amount > 1000){
            discout = amount * 10 / 100;  
        }
        else{
            discout = 0;
        }
    }

    finalAmount = amount - discout;

    printf("Discount = %.2f\n", discout);
    printf("Final price is = %.2f\n", finalAmount);
}