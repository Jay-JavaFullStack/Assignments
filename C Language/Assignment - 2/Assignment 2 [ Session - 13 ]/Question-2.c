//Open playlist.txt in read mode (r) and display each song name on a separate line in the console.

#include <stdio.h>
#include <stdlib.h>

void main(){
    FILE *fptr;

    char data[50];
    fptr = fopen("playlist.txt","r");

    if(fptr == NULL){
        printf("playlist.txt Failed to open");
    }else{
        printf("File is now opened\n");
        while(fgets(data,100,fptr) != NULL){
            printf("%s",data);
        }
        fclose(fptr);
    }
}