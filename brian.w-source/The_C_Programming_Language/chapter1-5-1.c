#include <stdio.h>

main()
{
    printf("<Exercise 1-6>");
    printf("\n--------------\n");
    int charOutput;

    charOutput = getchar();

    if(charOutput != EOF){
        int equalsEOF = charOutput == EOF;
        printf("This is what you inputted: %c\n", charOutput);
        printf("Is end of file: %d\n", equalsEOF);
    }

    printf("<Exercise 1-7>\n");
    printf("--------------\n");

    printf("EOF value: %d\n", EOF);
}