#include<stdio.h>
#include <board.h>
#include<Cunit.h>

int guard_tests(){

    printf("===Validate Guards===\n");

    cu_isTrue("Should throw an error due to bad index of -1\n",insert_bit(-1, 0, 1) == -1);
    cu_isTrue("should throw an error due to bad index of 17\n", insert_bit(17, 0, 1) == -1);
    cu_isTrue("should throw an error due to bad input of 3\n", insert_bit(0, 0, 3) == -1);
    cu_isTrue("should throw an error due to bad input of -1\n", insert_bit(0, 0, -1) == -1);
    
}

int insertion_tests(){

    //Validate insertion is correct:
    printf("===Validate Bit Insertion===\n");

    cu_assert_ints_are_equal(insert_bit(0, 0, 1), 1);
    cu_assert_ints_are_equal(insert_bit(1, 0, 1), 2);
    cu_assert_ints_are_equal(insert_bit(0, 1, 0), 0);
    cu_assert_ints_are_equal(insert_bit(0, 3, 0), 2);
    cu_assert_ints_are_equal(insert_bit(0, 3, 0), 2);

}


int main(int argc, char** argv) {
    guard_tests();
    insertion_tests();

    printf("\nTotal tests run: %d\n", tests_run);
}