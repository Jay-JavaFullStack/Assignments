// Use nested for loops to print a grid of emojis representing a 5x5 Instagram post feed, where each cell shows a 📷 symbol.

#include <stdio.h>

void main(){
    int i,j;

    for(i = 0; i <= 4; i++){
        for(j = 0; j <= 4; j++){
            printf("# ");
        }
        printf("\n");
    }
}