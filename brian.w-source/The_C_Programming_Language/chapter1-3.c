#include <stdio.h>

main()
{
    printf("<Exercise 1-4>");
    printf("\n--------------\n");
    printf("\n---<Temp Converter>---\n");
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("\n---<Fahr to Celsius Converter>---\n");
    for(fahr = 0; fahr <= 300; fahr = fahr = fahr + 20){
        celsius = (5.0/9.0) * (fahr-32.00);
        printf("%3.0f %6.1f\n", fahr, celsius);
    }
}