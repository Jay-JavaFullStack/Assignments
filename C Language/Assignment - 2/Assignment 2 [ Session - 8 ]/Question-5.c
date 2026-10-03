// Refactor an existing function you wrote above to make it reusable for both product names and usernames (for example, a function that capitalizes the first letter of any string). Constraint: The refactored function should work for any string input, not just a specific use case.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void capitalFirstLetter(char string[]){
    if(string[0] >= 'a' && string[0] <= 'z'){
        string[0] = string[0] - 32;
    }
}

void main(){
    char productName[] = "shoes";
    char userName[] = "jay";
    
    capitalFirstLetter(productName);
    capitalFirstLetter(userName);

    printf("Product name: %s\n", productName);
    printf("User name: %s\n", userName);
}