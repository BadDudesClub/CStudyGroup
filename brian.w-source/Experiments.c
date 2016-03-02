#include<stdio.h>
#include<minunit.h>

int tests_run = 0;

int insert_bit(int index, int store, int bit) {

    if(0 > index || index > 16){
        printf("Index cannot be less than 0 or more than 16: %d", index);
        return -1;
    }

    if(0 > bit || bit > 1){
        printf("bit must be 0 or 1 %d", index);
        return -1;
    }

    /*
    int i;
    for(i = 0; i < length; i++){
        printf("%c \n", input_string[i]);
    }
    */

    return 0;
}

static char* reverseAnIntTest_GuardsBothindexAndBit(){
    //Should Fail:

    //TODO: Find out why this is not giving me a message:
    mu_assert("should throw a error due to bad index of -1", insert_bit(-1, 0, 1) == -1);

    //Passes:
    return NULL;
}

static char* all_tests(){
    mu_run_test(reverseAnIntTest_GuardsBothindexAndBit);
    return NULL;
}

int main(int argc, char** argv) {

    char* test_failure = all_tests();

    if(test_failure == NULL){
        printf("\ntest ok!\n");
    } else {
        printf("\ntest failure: %s\n", test_failure);
    }



}



