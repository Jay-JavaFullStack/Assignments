// Write a program that reads all song names from playlist.txt and prints only those that contain the word 'love' (case-insensitive). Hint: Use the 'in' keyword or equivalent string method for filtering.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){
    FILE *fptr;
    char song[100];
    char lowersong[100];
    int i;

    fptr = fopen("playlist.txt","r");

    if(fptr == NULL){
        printf("File is not opened\n");
    }

    while(fgets(song,sizeof(song),fptr) != NULL){
        for(i = 0; song[i] != '\0'; i++){
            if(song[i] >= 'A' && song[i] <= 'Z'){
                lowersong[i] = song[i] + 32;
            }
            else{
                lowersong[i] = song[i];
            }
        }

        lowersong[i] = '\0';

        if(strstr(lowersong, "kala") != NULL){
            printf("%s",song);
        }
    }
    fclose(fptr);
}