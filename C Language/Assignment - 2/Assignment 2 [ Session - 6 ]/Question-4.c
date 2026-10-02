//Explain with your own example the difference between entry-controlled and exit-controlled loops by writing a short code snippet for each (for/while vs do-while) and describing what happens if the loop condition is false at the start.

//Enter Control Loop ( For / While )
//Defination :- The condition is checked before entering the loop body. if the condition is false at the start, the loop body never runs.

//Exit Control Loop ( Do-While )
//Defination :- The conditon is checked after running the loop body at least once. So the loop body always runs at least one time, even condition is false.

#include <stdio.h>
void main(){
    int i = 10;
    while(i < 5){
        printf("%d\n",i);
        i++;
    }

    int j = 10;
    do {
        printf("%d\n",j);
        j++;
    }while(i < 5);  
}