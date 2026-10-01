// Build a Zomato-style food suggestion tool: take the user's preferred meal time ('breakfast', 'lunch', 'dinner', or 'snack') and use a switch-case statement to suggest a popular dish for that time. If the input doesn't match any meal, suggest 'Try some fruits!'.

#include <stdio.h>
#include <string.h>

void main(){
    char mealTime[40];

    printf("Enter you Meal (Breakfast / Lunch / Dinner / Snack) = ");
    scanf("%s",&mealTime);

    int select;

    if(strcmp(mealTime,"Breakfast") == 0) select = 1;
    else if(strcmp(mealTime,"Lunch") == 0) select = 2;
    else if(strcmp(mealTime,"Dinner") == 0) select = 3;
    else if(strcmp(mealTime,"Snack") == 0) select = 4;
    else select = 0;

    switch (select){
        case 1: 
        printf("Suggest Dish : Poha\n");
        break;

        case 2:
        printf("Suggest Dish : Fix Gujrati Thali\n");
        break;

        case 3:
        printf("Suggest Dish : Paneer Butter Masala with naan\n");
        break;

        case 4:
        printf("Suggest Dish : Kachori\n");
        break;

        default:
        printf("Try Some Fruits!\n");
    }
}