#include <stdio.h>
int main() {
    int scores[10];
    printf("Please enter your 10 scores:\n");
    int i = 0;
    while (i<10){
        int score;
        scanf("%d", &score);
        scores[i] = score;
        i += 1;
    }
    printf("You have entered the maximum amount (10)\n");

    int j, min;
    for (i = 0; i <10; i++) {
        min = i;
        for (j=i+1; j<10; j++){
            if (scores[j]< scores[min]){
                min = j;
            }
        }
        //swap(&scores[min], &scores[i]);
        int temp = scores[min];
        scores[min] = scores[i];
        scores[i] = temp;
    }

    printf("*** HIGH SCORE TABLE ***\n");
    for (int i = 0; i< 10; i++) {
        int m = i+1;
        printf("\t%d - ", m);
        printf("%d\n", scores[i]);
    }
    printf("Lowest score: %d\n", scores[0]);
    printf("Highest score: %d\n", scores[9]);
}
