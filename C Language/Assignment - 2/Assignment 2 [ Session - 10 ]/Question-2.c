//Take input for two usernames (as strings) and compare them using strcmp(). Display whether they are the same or different.

#include <stdio.h>
#include <string.h>

void main(){
    char user1[100], user2[100];

    printf("Enter 1 username: ");
    scanf("%s",&user1);

    printf("Enter 2 username: ");
    scanf("%s",&user2);

    if(strcmp(user1, user2) == 0){
        printf("Both username is same\n");
    }else{
        printf("username is not same");
    }
}