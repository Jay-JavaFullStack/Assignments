//Write a function swapPlaylistCounts(int *a, int *b) that swaps the number of songs in two Spotify playlists using pointers, then call the function in main and print the swapped values.


#include <stdio.h>

void swapPlaylistCounts(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void main(){
    int playList1 = 49;
    int playList2 = 63;

    printf("Before swapping playlist\nPlaylist1 = %d, Playlist2 = %d\n",playList1,playList2);

    swapPlaylistCounts(&playList1, &playList2);

    printf("\nAfter swapping playlist\nPlaylist1 = %d, Playlist2 = %d\n",playList1,playList2);
}