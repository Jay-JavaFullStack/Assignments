// Modify your pyramid pattern code to accept the number of rows as user input, so the user can set the height of the pyramid before printing.

#include <stdio.h>
void main(){
    int i, j, n;

    printf("Enter row Numbers = ");
    scanf("%d",&n);

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