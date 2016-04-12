#include<stdio.h>

//From exercise from "C the hard way":
//http://c.learncodethehardway.org/book/ex15.html
//I added my own twist to entertain myself so I was'nt just copying:
int main(int argc, char** argv) {

    //The two arrays we are working with:
    int fartLevels[] = {100, 90, 91};
    char *fartMasters[] = {"Brian", "Brett", "James"};

    //get the size of the fart collection:
    int count = sizeof(fartLevels) / sizeof(int);
    int i = 0;

    for(i = 0; i < count; i++){
        printf("%s is farting at %d percent of their current potential. \n",
               fartMasters[i], fartLevels[i]);
    }

    printf("\n");
    printf("---Next Thing---\n");
    printf("\n");

    int *cur_fartLevel = fartLevels;
    char **cur_fartMasters = fartMasters;

    //Using pointers:
    for(i = 0; i < count; i++){
        printf("%s is %d percent farting",
        *(cur_fartMasters+i), *(cur_fartLevel+i));
    }

    printf("---\n");

    //Pointers are arrays:
    for(i = 0; i < count; i++){
        printf("%s just keeps going at %d percent", cur_fartMasters[i], cur_fartLevel[i]);
    }

    printf("\n");
    printf("---Next Thing---\n");
    printf("\n");

    //Using a incrementor to move the pointers along:
    for(cur_fartLevel = fartLevels, cur_fartMasters = fartMasters;//Reset the current pointer position
        (cur_fartLevel - fartLevels) < count; //Checks the delta between the current and the first position
        cur_fartMasters++, cur_fartLevel++){ //Moves the current pointer up one

            printf("%d farts by %s have occurred this year.\n", *cur_fartLevel, *cur_fartMasters);
    }

    return 0;
}