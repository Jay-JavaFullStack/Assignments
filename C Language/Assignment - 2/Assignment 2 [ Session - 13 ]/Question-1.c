// Create a file called playlist.txt and write the names of your top 3 favorite songs from Spotify into it using write mode (w).

#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fptr;

    char data[50][50] = {{"Tere Liye"},{"kala Chashma"},{"Dilbar"}};
    fptr = fopen("playlist.txt", "w");

    int i;
    if (fptr == NULL) {
        printf("File is Not Open");
    } else {
        printf("File is Opened.\n");

        for (i = 0; i < 3; i++) {
            fputs(data[i], fptr);
            fputs("\n", fptr);
        }

        fclose(fptr);
        printf("Data Successfully Written in File playlist.txt\n");
        printf("File is now closed");
    }
}