// Create a constant variable to store the GST rate (for example, 18%) and use it to calculate the final price of a Zomato order with a given base price. Constraint: The GST rate must not be changeable after its initial assignment.

#include <stdio.h>

int main(){
    const float GST_RATE = 0.18;

    float basePrice = 500.00;

    float gstAmount = basePrice * GST_RATE ;
    float finalPrice = basePrice + gstAmount;

    printf("Base Price : %.2f\n", basePrice);
    printf("GST (18%) : %.2f\n", gstAmount);
    printf("Final Price : %.2f\n", finalPrice);

    return 0;
}