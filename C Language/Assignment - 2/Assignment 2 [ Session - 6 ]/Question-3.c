// Build a 'Guess the Song' game like Spotify — the program randomly picks a song name from a list and asks the user to guess it. Use a do-while loop so the user can keep guessing until they get it right. Constraint: Use at least 3 song names of your choice.

#include <stdio.h>
#include <string.h>

void main(){
    char songs[50][50] = {"Shape of you","Kesariya","Tere liye","Blinding Lights"};
    char ans[50];
    strcpy(ans, songs[2]);

    char guess[50];
    int correct = 0;

    do{
        printf("Guess the songs = ");
        scanf(" %[^\n]",guess);

        if(strcmp(guess, ans) == 0 ){
            printf("Correct!\n");
            correct = 1;
        }else{
            printf("Wrong!\n");
        }
    }while(!correct);
}