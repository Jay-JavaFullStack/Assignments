//Given an array of 5 order amounts (e.g., Zomato orders), use a pointer to iterate through the array and print each amount along with its memory address. Hint: Use pointer arithmetic to move to the next element.

#include <stdio.h>

void main(){
    int order[5] = {345,269,297,292,403};
    int *ptr = order;
    int i;
    for(i = 0; i < 5; i++){
        printf("Order %d: Amount = %d, Address = %d\n",i + 1, *(ptr + i), (ptr + i));
    }
}