//Create a 2D array called playlistRatings to store ratings for 3 Spotify playlists over 5 days (rows = playlists, columns = days). Fill it with sample numbers and print the ratings for the second playlist.

#include <stdio.h>

void main(){
    int playlistRatings[3][5] = {{5,3,4,2,3},{3,4,1,2,4},{5,3,5,2,3}};
    int i;
    printf("Rating 2nd Playlist\n");
    for(i = 0; i < 5; i++){
        printf("Day %d: %d\n",i + 1, playlistRatings[1][i]);
    }
}