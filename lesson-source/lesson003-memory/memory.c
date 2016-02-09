#include<stdio.h>
#include<stdint.h>

int main(int argc, char** argv) {
    int num = 16909060;
    int* num_ptr = &num;                /* num_ptr now contains the address of num */
    char* num_as_char = (char*)&num;    /* interpret num as a sequence of bytes */

    printf("the size of int is %d\n", sizeof(int));
    printf("the size of char is %d\n", sizeof(char));
    printf("the address of num is %d\n", num_ptr);
    printf("the value of num is %d\n", num);
    printf("but some would also say it is %d\n", *num_ptr);

    *num_ptr = *num_ptr + 1;

    printf("and if I add 1 to *num_ptr, the value of num is %d\n", num);

    printf("the value of the first byte of num is %d\n", num_as_char[0]);
    printf("the value of the second byte of num is %d\n", *(num_as_char + 1));

    return 0;
}
