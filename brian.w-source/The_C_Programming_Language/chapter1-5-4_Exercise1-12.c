#include <stdio.h>

main()
{
    #define IN 1
    #define OUT 0

    int character, newLine, newWord, newChar, state;
    state = OUT;
    newLine = newWord = newChar = 0;

    while ((character = getchar()) != EOF){


        if(character == ' '|| character == '\t'){
            putchar('\n');
        }
        else
        {
            putchar(character);
        }
    }

    putchar('\n');
}