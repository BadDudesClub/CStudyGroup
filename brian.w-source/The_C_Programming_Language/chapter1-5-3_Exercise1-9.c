#include <stdio.h>

main()
{
    printf("<Exercise 1-9>\n");
    printf("--------------\n");
    int spaceFound = 0;
    int charOutput = getchar();

    while (charOutput != EOF){
        //Space or "Blank":
        if(charOutput == 32){
            spaceFound++;
        }

        if(charOutput != 32){
            if(spaceFound > 0){
                putchar(32);
            }
            spaceFound = 0;
            putchar(charOutput);
        }

        charOutput = getchar();
    }

    if(spaceFound > 0){
        putchar(32);
    }

    //Write a program to copy its input to its output, replacing each string of one or
    //more blanks by a single blank:




    printf("EOF value: %d\n", EOF);
}