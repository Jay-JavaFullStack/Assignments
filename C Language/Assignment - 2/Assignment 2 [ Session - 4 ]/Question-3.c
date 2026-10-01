// Write a function isEligibleForOffer that takes a user's age and total order value, and returns true if the user is 18 or older AND the order value is above 500, otherwise false. Hint: Use relational and logical operators together.
// 1 = True
// 0 = False


#include <stdio.h>

int isEligibleForOffer(int age, float value){
    return (age >= 18 && value > 500);
}

void main(){
    printf("%d\n", isEligibleForOffer(20,650));
    printf("%d\n", isEligibleForOffer(18,500));
    printf("%d\n", isEligibleForOffer(20,350));
    printf("%d\n", isEligibleForOffer(16,950));
}