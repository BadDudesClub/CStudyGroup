#include <stdio.h>

main()
{
    printf("<Exercise 1-8>");
    printf("\n--------------\n");
    int spaceCount = 0;
    int tabCount = 0;
    int newlineCount = 0;

    int charOutput = getchar();

    while (charOutput != EOF){ //TODO: Understand why you cannot read the EOF
        //printf("DEBUG: %d\n", charOutput);
        //Space or "Blank":
        if(charOutput == 32){
            spaceCount++;
        }

        //Tab:
        if(charOutput == 9 || charOutput == 11) {
            tabCount++;
        }

        //New Line:
        if(charOutput == 10 || charOutput == 13){
            newlineCount++;
        }

        charOutput = getchar();
    }

    printf("space count: %d\n", spaceCount);
    printf("tab count: %d\n", tabCount);
    printf("newline count: %d\n", newlineCount);
}