//Create a function incrementFollowers(int *followers, int n) that increases each follower count in an array (representing Instagram followers for 5 friends) by 100 using pointer arithmetic, then print the updated counts.
#include <stdio.h>

void incrementFollowers(int *followers, int n){
    int i; 
    for(i = 0; i < n; i++){
        *(followers + i) = *(followers + i) + 100;
    }
}

void main(){
    int friends[5] = {800, 1200, 200, 670, 1500};
    int i;

    incrementFollowers(friends, 5);

    printf("Update Follower Count: \n");

    for(i = 0; i < 5; i++){
        printf("Friend %d: %d\n",i + 1, friends[i]);
    }
}