#include<stdio.h>
#include <board.h>
#include<minunit.h>
#include<string.h>

int tests_run;

char* guard_tests(){
    int stub_board[64] = {0};
    mu_assert("Should throw an error due to bad index of -1", insert_bit(stub_board, -1, 0, 1) == -1);
    mu_assert("should throw an error due to bad index of 17", insert_bit(stub_board, 17, 0, 1) == -1);
    mu_assert("should throw an error due to bad input of 3", insert_bit(stub_board, 0, 0, 3) == -1);
    mu_assert("should throw an error due to bad input of -1", insert_bit(stub_board, 0, 0, -1) == -1);
    return NULL;
}

char* insertion_tests(){
    int stub_board[64] = {0};
    insert_bit(stub_board, 0, 0, 1);
    int output = stub_board[0];
    mu_assert("Insert did not equal 1 in position 0", output == 1);
    memset(stub_board, 0, 64 * sizeof(int));
    insert_bit(stub_board, 1, 0, 1);
    output = stub_board[1];
    mu_assert("Insert did not equal 1 in position 1", output == 1);

    memset(stub_board, 0, 64 * sizeof(int));
    insert_bit(stub_board, 1, 1, 1);
    output = stub_board[9];
    mu_assert("Insert did not equal 1 in position 9", output == 1);

    return NULL;
}

char* get_tests(){
    int stub_board[64] = {[0 ... 63] = 0};

    stub_board[0] = 1;
    mu_assert("Retrieval did not equal 1 in position 0", get_bit(stub_board, 0, 0) == 1);

    stub_board[8] = 1;
    mu_assert("Retrieval did not equal 1 in position 8", get_bit(stub_board, 0, 1) == 1);
    return NULL;
}

char* all_tests(){
    mu_run_test(guard_tests);
    mu_run_test(insertion_tests);
    mu_run_test(get_tests);
    return NULL;
}

int main(int argc, char** argv) {
    char* output = all_tests();
    //TODO: Get some of these tests to fail
    if(output == NULL){
        printf("All tests passed");
    }
    else{
        printf(output);
    }





    printf("\nTotal tests run: %d\n", tests_run);
}