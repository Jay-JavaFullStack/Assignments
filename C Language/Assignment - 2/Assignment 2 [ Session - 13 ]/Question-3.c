// Add two more song names to playlist.txt without deleting the existing ones by opening the file in append mode (a).

#include <stdio.h>
#include <stdlib.h>

void main(){
    FILE *fptr;

    char data[5][50] = {{"Millionaire"},{"Wavy"}};
    fptr = fopen("playlist.txt","a");

    int i;
    if(fptr == NULL){
        printf("File is not opened");
    }else{
        printf("File is Opened\n");

        for(i = 0; i < 2; i++){
            fputs(data[i], fptr);
            fputs("\n", fptr);
        }

        fclose(fptr);
        printf("Data Update Successfully in file\n");
        printf("File is now Closed");
    }
}