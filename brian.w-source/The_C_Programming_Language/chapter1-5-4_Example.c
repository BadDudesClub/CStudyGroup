#include <stdio.h>

main()
{
    #define IN 1
    #define OUT 0

    int character, newLine, newWord, newChar, state;
    state = OUT;
    newLine = newWord = newChar = 0;

    while ((character = getchar()) != EOF){
        ++newChar;

        if(character == '\n')
            ++newLine;

        if(character == ' '|| character == '\n' || character == '\t')
            state = OUT;
        else if (state == OUT){
            state = IN;
            ++newWord;
        }
    }
    printf("lines: %d words: %d characters: %d\n", newLine, newWord, newChar);

}