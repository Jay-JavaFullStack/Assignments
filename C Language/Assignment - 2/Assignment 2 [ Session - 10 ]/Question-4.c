//Build a small script that takes the user's full name as input and creates a username by copying only the first 5 characters using strcpy(). Print the generated username. Constraint: If the name is shorter than 5 characters, use the full name as the username.

#include <stdio.h>
#include <string.h>

void main(){
    char fullName[50];
    char userName[6];

    printf("Enter your fullname: ");
    scanf("%s",&fullName);

    int length = strlen(fullName);

    if(length < 5){
        strcpy(userName, fullName);
    }else{
        strncpy(userName, fullName, 5);
    }

    printf("Genrated user name: %s", userName);
}