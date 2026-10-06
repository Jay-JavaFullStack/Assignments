// Declare a function called getUserInitials that takes a user's full name (like 'Virat Kohli') and returns their initials in uppercase (e.g., 'VK'). Call this function with your favorite cricketer's name and print the result.

#include <stdio.h>

void getUserInitials(char name[]){
    printf("%c%c\n",name[0],name[8]);
}

void main(){
    char name[] = "Shubman Gill";
    getUserInitials(name);
    
}