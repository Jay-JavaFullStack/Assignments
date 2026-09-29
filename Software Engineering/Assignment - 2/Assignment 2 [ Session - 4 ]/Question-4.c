//Given three variables: likes, comments, and shares (all numbers), write code to check if a post is 'trending' on Instagram (at least 1000 likes OR more than 200 comments AND at least 50 shares). Print the result.

#include <stdio.h>

void main(){
    int like, comment, share;
    printf("Enter Like Count = ");
    scanf("%d",&like);
    printf("\nEnter Comment Count = ");
    scanf("%d",&comment);
    printf("\nEnter Share Count = ");
    scanf("%d",&share);
    
    int isTrending;
    isTrending = (like >= 1000) || (comment > 50 && share >= 50);

    printf("\nIs Post Is Trending? = %d",isTrending);
}