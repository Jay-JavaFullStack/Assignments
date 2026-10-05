//Declare a structure named Playlist to store details of a song: title (string), artist (string), and duration in seconds (integer). Initialize one Playlist variable with your favorite song's details and print each field.

#include <stdio.h>

struct Playlist{
    char title[50];
    char artist[100];
    int seconds;
};


void main(){
    struct Playlist song1 = {"Tere Liye", "Atif Aslam & Shreya Ghosha", 279};
    struct Playlist song2 = {"Wavy", "Karan Aujla", 161};

    printf("Title: %s\n", song1.title);
    printf("Artist: %s\n", song1.artist);
    printf("Seconds: %d\n\n", song1.seconds);

    printf("Title: %s\n", song2.title);
    printf("Artist: %s\n", song2.artist);
    printf("Seconds: %d\n", song2.seconds);
}