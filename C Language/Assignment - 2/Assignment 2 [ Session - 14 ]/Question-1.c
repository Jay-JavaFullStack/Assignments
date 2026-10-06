//Given the following buggy code meant to calculate the total price of a Zomato order, identify and fix the syntax and runtime errors: let items = ["Burger", "Pizza", "Fries"]; let prices = [120, 250, 90];let total = 0;for (i = 0; i < items.length; i++) {total =+ prices[i]} console.log("Total price is: " + total); Hint: Watch for assignment and loop variable issues.

//Fixed Code:
#include <stdio.h>
#include <string.h>

void main(){
    char items[3][20] = {{"Burger"},{"Pizza"},{"Fries"}};
    int price[3] = {120, 250, 90};
    int total = 0;

    int i;  //Declare i
    for(i = 0; i < 3; i++){
        total += price[i];  //"+=" Use this not "=+" this
    }
    printf("Total price is: %d",total);
}