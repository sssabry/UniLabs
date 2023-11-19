#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "miniset.h"


int is_reflexive(int set[])
{
    int i = 0;
    int j = i + 1;
    int reflex = 0;
    int len = num_elements(set);
    for (i = 0; i<len; i++){
        if (set[i] = set[j]){
            reflex = 1;
        } 
    }
    return reflex;
}

int is_symmetric(int set[])
{
    int len = num_elements(set);
    int symm = 1;
    for (int i = 0; i<len; i++){
        int a = set[i];
        int b = set[i+1];

        if (a !=b && !in_set(set, b, a)){
            symm = 0;
        }
    }
    return symm;
}

int is_transitive(int set[])
{
    return FALSE;
}
int is_equivalent(int set[]){
    int reflex = is_reflexive(set);
    int symm = is_symmetric(set);
    int tran = is_transitive(set);
    int equiv = 0;
    if (reflex == 1 && symm ==1 && tran == 1){
        equiv = 1;
    }
    return equiv;
}

int main()
{
    int set[20];

    init_set(set);

    add_to_set(set, 1, 1);

    print_set(set);

    printf("in_set(1,1) = %d\n", in_set(set, 1, 1));
    int reflex = is_reflexive(set);
    int symm = is_symmetric(set);
    int tran = is_transitive(set);
    int equiv = is_equivalent(set);

    printf("is reflexive: %d\n", reflex);
    printf("is symmetric: %d\n", symm);
    printf("is transistive: %d\n", tran);

    printf("is equivalent: %d\n", equiv);

    return EXIT_SUCCESS;
}
