#include<stdio.h>

int abs(int a) {
    if(a < 0) {
        return -a;
    } else {
        return a;
    }
}

int sum(int a, int b) {
    return a + b;
}

int factorial(int f) {
    if(f == 1) {
        return 1; 
    } else {
        return f * factorial(f - 1);
    }
}

int sum_from_to(int start, int end) {
    int sum = 0;
    for(int i = start; i <= end; i++) {
        sum = sum + i;
    }
    return sum;
}

int crappy_lg2(int n) {
    int log = 0;
    while(n >= 2) {
        n = n / 2;
        log++; 
    } 
    return log;
}

int main(int argc, char** argv) {
    printf("5 + 6 = %d\n", sum(5, 6));
    printf("the sum from 6 to 10 is %d.\n", sum_from_to(6, 10));
    printf("the absolute value of -12 is %d.\n", abs(-12));
    printf("8! = %d.\n", factorial(8));
    printf("the log(base 2) of 32 is somewhere around %d.\n", crappy_lg2(32));
    return 0;
}
