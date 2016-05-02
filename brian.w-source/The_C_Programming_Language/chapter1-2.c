#include <stdio.h>

main()
{

    //Exercise 1-3. Modify the temperature conversion program to print a heading above the table.
    printf("<Exercise 1-3>");
    printf("\n--------------\n");
    printf("\n---<Temp Converter>---\n");
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("\n---<Fahr to Celsius Converter>---\n");
    while(fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.00);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    fahr = lower;
    printf("\n--------------\n");
    //Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.
    printf("<Exercise 1-3>");
    printf("\n---<Celsius to Fahr Converter>---\n");
    while(fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.00);
        //printf("% %6.1f\n", fahr, celsius);
        printf("%6.1f %3.0f\n", celsius, fahr);
        fahr = fahr + step;
    }

}