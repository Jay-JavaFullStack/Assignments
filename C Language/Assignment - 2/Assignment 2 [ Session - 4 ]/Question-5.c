// Write a code snippet that demonstrates the difference between pre-increment (++count) and post-increment (count++) by logging the values before and after using both on a followerCount variable.

#include <stdio.h>

void main(){
    int followerCount = 100;

    printf("Befor = %d\n",followerCount);
    printf("Post - Increment = %d\n", followerCount++);
    printf("After Post - Increment = %d\n",followerCount);

    printf("Befor Pre - Increment = %d\n",followerCount);
    printf("Pre - Increment = %d\n",++followerCount);
    printf("After Pre - Increment = %d",followerCount);
}