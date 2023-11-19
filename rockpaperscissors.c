#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>


int main()
{
    int machine;
    int person;
    char Mach[8];
    char Pers[8];
    char One[] = "Rock";
    char Two[] = "Paper";
    char Three[] = "Scissors";


    printf("Welcome to rock, paper, scissors!\n");

    //while ()

    printf("Please enter 1 for Rock, 2 for Paper or 3 for Scissors and 0 to quit\n");

    
    if (person == 1) {
        strcpy(Pers, One);
        printf("Player chose: %s\n", Pers);
    }
    else if (person == 2) {
        strcpy(Pers, Two);
        printf("Player chose: %s\n", Pers);
    }
    else if (person == 3) {
        strcpy(Pers, Three);
        printf("Player chose: %s\n", Pers);
    } else if (person == 0){
        //break;
    }

    machine = rand() % 3 + 1;
    
    if (machine == 1) {
        strcpy(Mach, One);
        printf("Machine chose: %s\n", Mach);
    }
    else if (machine == 2) {
        strcpy(Mach, Two);
        printf("Machine chose: %s\n", Mach);
    }
    else if (machine == 3) {
        strcpy(Mach, Three);
        printf("Machine chose: %s\n", Mach);
    }
    bool win = 0;
    
    if (machine == 1 && person == 2) { 
        // mach: Rock, person: paper
        win = 1;
    } else if (machine == 3 && person == 1){
        // mach: Scissors, person: Rock
        win = 1;
    } else if (machine == 2 && person == 3){
        win = 1;
    } else {
        win = 0;
    }
    
    if (win = 0){ //ie: machine won
        printf("Sorry, you lost this round!");
    } else if (win = 1){ // ie: person won
        printf("Congratulations! You beat the machine");
    }
    
}
