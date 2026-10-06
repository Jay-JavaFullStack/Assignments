//Rewrite the following code to improve its indentation and add comments explaining each step, so that a beginner can understand what it does: function isEven(num){if(num%2==0){return true;}else{return false;}}


#include <stdio.h>

//Function to check if a number is even
int isEven(int num){
    //Check if the number divided by 2 leaves no remainder
    if(num % 2 == 0){
        //If remainder is 0, the number is even
        return 1; //1 represent true in C
    }else{
        //If If remainder is not 0, the number is odd
        return 0; //0 represent false in C
    }
}

void main(){
    int number = 10;

    //Call the function and check the result
    if(isEven(number)){
        printf("%d is even\n",number);
    }else{
        printf("%d is odd\n", number);
    }
}