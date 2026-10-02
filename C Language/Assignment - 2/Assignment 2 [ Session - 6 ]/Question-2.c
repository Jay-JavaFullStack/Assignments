//Create a menu-driven console app that lets the user: 1) View your favorite 3 IPL teams, 2) Add a new team, 3) Exit. Use a while loop to keep showing the menu until the user chooses Exit. Hint: Use input() (or Scanner in Java) to get the user's choice each time.

#include <stdio.h>

void main(){
    char team[30][30] = {"Gujarat Titans","Royal Challengers Bengaluru","Mumbai Indians"};
    int totalTeams = 3;
    int choice;

    while(choice != 3){
        printf("\n1.View Teams\n2.Add Team\n3.Exit\n");
        printf("Enter Choice = ");
        scanf("%d",&choice);

        int i;
        if(choice == 1){
            for(i = 0; i < totalTeams; i++){
                printf("%d. %s\n",i + 1, team[i]);
            }
        }
        else if(choice == 2){
            printf("Enter team name: ");
            scanf("%s", team[totalTeams]);
            totalTeams ++;
        }
        else if(choice == 3){
            printf("Thank you!\n");
        }
        else{
            printf("Invalid Choice\n");
        }
    }
}