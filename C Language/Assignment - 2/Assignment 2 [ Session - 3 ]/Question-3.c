// Write a program that stores your favorite Spotify playlist's name (string), total number of songs (int), and average song duration in minutes (float). Print all values in a single formatted sentence.

#include <stdio.h>

int main(){
    char playlistName[50] = "Bollywood Party";
    int totalSongs = 78;
    float avgDuration = 3.7;

    printf("My Favourite Spotify Playlist '%s' has '%d' songs, with an average duration of %.1f minutes per song.\n", playlistName , totalSongs, avgDuration);

    return 0;
}