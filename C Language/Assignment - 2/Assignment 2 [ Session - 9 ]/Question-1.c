//Declare a 1D array called dailySteps with 7 elements to store your step count for each day of the week, assign sample values, and print each value using a loop.

#include <stdio.h>

void main(){
    int dailySteps[7] = {7300,7900,4500,11000,8000,8200,12000};

    int i;
    for(i = 0; i <= 6; i++){
        printf("Days %d: %d Steps\n",i + 1, dailySteps[i]);
    }
}