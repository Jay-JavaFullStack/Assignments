//Create a simple IPL Fan Bot that takes your favorite IPL team name as input and uses if-else-if statements to print a unique cheer message for each team (e.g., 'Go Mumbai Indians!', 'Chennai Super Kings for the win!'). If the team is not recognized, print 'Team not found!'

#include <stdio.h>
#include <string.h>

void main(){
    char teams[][50] = {"GT","RCB","MI","DC","KKR"};
    char cheers[][50] = {"Aava De","Ee Sala Cup Numdu","Go Mumbai","Win Delhi","King Kalkata"};

    int totalTeams = 5;

    char team[50];
    printf("Enter Your favourite IPL team = ");
    scanf("%s",&team);

    int count = 0, i;
    for(i = 0; i < totalTeams; i++){
        if(strcmp(team, teams[i]) == 0){
            printf("%s\n",cheers[i]);
            count = 1;
            break;
        }
        }
        if(!count){
            printf("Team not Found!\n");
    }
}