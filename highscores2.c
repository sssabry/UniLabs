#include <stdio.h>
#include <string.h>
int main () {
    int scores[10];

    printf("Please enter a new command:\n"); 
    printf("Your options are: \n 'P' to display all highscores \n 'N' to insert another highscore \n 'E' to end the program \n)");
    char comm;
    
    // printf("%c\n", comm);
    
    while (comm != 'E') {
        scanf("%c", &comm);
        if ( comm != 'N' && comm != 'P') {
            printf("Please enter a valid option or new command.\n");
        }
        if (comm == 'P'){
            printf("*** HIGH SCORE TABLE ***\n");
            for (int i = 0; i< 10; i++) {
                int m = i+1;
                printf("\t%d - ", m);
                printf("%d\n", scores[i]);
            }
            printf("Lowest score: %d\n", scores[0]);
            printf("Highest score: %d\n", scores[9]);
        } else if (comm == 'N'){
            int new;
            printf("Please enter the highscore you'd like to add:\n");
            scanf("%d", &new);
            scores[0] = new;
            
            int j, min;
            for (int i = 0; i <10; i++) {
                min = i;
                for (j=i+1; j<10; j++){
                    if (scores[j]< scores[min]){
                        min = j;
                    }
                }
                int temp = scores[min];
                scores[min] = scores[i];
                scores[i] = temp;
            }
    
        } 
        
    }
}
