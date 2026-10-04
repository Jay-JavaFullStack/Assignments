//Build a function that takes a 1D array of 7 integers representing your daily Zomato order amounts and calculates the average spend for the week. Hint: Use a loop to sum the values, then divide by the array length.

#include <stdio.h>

float averageCalculator(int orders[], int size){
    int i, sum = 0;

    for(i = 0; i < size; i++){
        sum = sum + orders[i];
    }

    float average = (float)sum + size;
    return average;
}

void main(){
    int zomatoSpend[7] = {400, 120, 389, 122, 344, 788, 985};

    float avgSpend = averageCalculator(zomatoSpend, 7);

    printf("Average Weekly Spend: %.2f\n",avgSpend);
}