#include <stdio.h>

main()
{
    printf("<Exercise 1-6>");
    printf("\n--------------\n");
    int charOutput = getchar();

    while (charOutput != EOF){ //TODO: Understand why you cannot read the EOF

        //int equalsEOF = charOutput == EOF;
        printf("This is what you inputted: %c\n", charOutput);

        charOutput = getchar();
    }

    printf("end of file: %d\n", charOutput);

    printf("<Exercise 1-7>\n");
    printf("--------------\n");

    printf("EOF value: %d\n", EOF);
}