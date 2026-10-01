// Build a Flipkart-style discount calculator: given product price, discount percentage, and a boolean isMember, use arithmetic and logical operators to calculate the final price (apply an extra 5% off if isMember is true).

#include <stdio.h>

float disCalculator(float price, float discountPer, int isMember)
{
    float priceAfterDiscount = price - (price * discountPer / 100);
    float finalPrice;

    if (isMember)
    {
        finalPrice = priceAfterDiscount - (priceAfterDiscount * 5 / 100);
    }
    else
    {
        finalPrice = priceAfterDiscount;
    }

    return finalPrice;
}

void main()
{
    printf("%f\n", disCalculator(100, 10, 1)); // Member
    printf("%f\n", disCalculator(1000, 30, 0)); // Not a Member
}