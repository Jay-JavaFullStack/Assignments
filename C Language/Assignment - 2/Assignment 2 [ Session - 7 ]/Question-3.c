// Create a pattern that prints a pyramid of stars (*) with 6 rows, centered like the loading animation you see on BookMyShow when a page is loading. Hint: Use spaces to align the stars in the center for each row.

#include <stdio.h>

void main(){
    int i, j, n = 6;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= n - i; j++){
            printf(" ");
        }
        for(j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
}