#include<stdio.h>
#include <board.h>
#include<minunit.h>

int tests_run = 0;

static char* tests(){
    //Validate guards:
    mu_assert("should throw an error due to bad index of -1", insert_bit(-1, 0, 1) == -1);
    mu_assert("should throw an error due to bad index of 17", insert_bit(17, 0, 1) == -1);
    mu_assert("should throw an error due to bad input of 3", insert_bit(0, 0, 3) == -1);
    mu_assert("should throw an error due to bad input of -1", insert_bit(0, 0, -1) == -1);

    //Validate insertion is correct:
    mu_assert("Should return a new store of 1", insert_bit(0, 0, 1) == 1);
    mu_assert("Should return a new store of 2", insert_bit(1, 0, 1) == 2);

    //Passes:
    return NULL;
}

static char* all_tests(){
    mu_run_test(tests);
    return NULL;
}

int main(int argc, char** argv) {

    char* test_failure = all_tests();

    if(test_failure == NULL){
        printf("\ntest ok!\n");
    } else {
        printf("\ntest failure: %s\n", test_failure);
    }

    printf("\nTotal tests run: %d\n", tests_run);
}