//Copy the string 'Flipkart' into another string variable called shoppingApp using strcpy(), then print the value of shoppingApp. Hint: Make sure to declare enough space for the destination string.

#include <stdio.h>
#include <string.h>

void main(){
    char str1[] = {"Flipkart"};
    char shoppingApp[30];

    strcpy(shoppingApp, str1);
    puts(shoppingApp);
    
    printf("Shopping app: %s\n",shoppingApp);
}