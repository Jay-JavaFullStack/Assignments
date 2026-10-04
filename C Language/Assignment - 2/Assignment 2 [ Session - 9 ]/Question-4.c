//Given a 2D array called cricketScores where each row represents an IPL match and columns represent runs scored by each team, write code to print the highest score from each match.

#include <stdio.h>

void main(){
    int cricketScores[3][2] = {{219,181},{145,167},{210,208}};

    int i, j, match = 3, runs = 2;

    for(i = 0; i < match; i++){
        int highest = cricketScores[i][0];

        for(j = 0; j < runs; j++){
            if(cricketScores[i][j] > highest){
            highest = cricketScores[i][j];
            }
        }
        printf("Match %d Highest Score: %d\n",i + 1 ,highest);
    }   
}