//Declare an integer variable called likes and a pointer variable called ptrLikes; assign likes a value, point ptrLikes to likes, and print both the value and the address stored in ptrLikes.

#include <stdio.h>

void main(){
    int likes = 1320;
    int *ptrLikes = &likes;

    printf("Value of Likes: %d\n", likes);
    printf("Value using Pointer: %d\n", *ptrLikes);
    printf("Address store in Pointer: %d\n", ptrLikes);
}