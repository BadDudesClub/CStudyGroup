#include <stdio.h>

main()
{
    printf("<Exercise 1-10>");
    printf("\n--------------\n");
    int spaceCount = 0;
    int tabCount = 0;
    int newlineCount = 0;

    int charOutput = getchar();

    while (charOutput != EOF){ //TODO: Understand why you cannot read the EOF

        int specialCharFound = 0;
        //printf("DEBUG: %d\n", charOutput);

        //Tab:
        if(charOutput == 9 || charOutput == 11){
            int backSlash = '\\';
            putchar(backSlash);

            int teeChar = 't';
            putchar(teeChar);
            specialCharFound++;
        }

        //Backspace:
        if(charOutput == 8){
            int backSlash = '\\';
            putchar(backSlash);

            int bChar = 'b';
            putchar(bChar);
            specialCharFound++;
        }

        if(specialCharFound == 0){
            putchar(charOutput);
        }
        charOutput = getchar();
    }

}