#include<stdio.h>
#include<minunit.h>

int tests_run = 0; // global variable that holds number of tests run

int square(int i) {
    return i * i;
}

// static in C means that this function is not exported
// for linking
static char* test_square() {
    mu_assert("expecting square(4) == 16", square(4) == 16);
    mu_assert("expecting square(1) == 1", square(1) == 1);
    return NULL;
}

static char* failing_test() {
    mu_assert("expecting square(5) == 20 cause this test is supposed to fail", square(5) == 20);
    return NULL;
}

static char* all_tests() {
    mu_run_test(test_square);
    // uncomment this test to see a failing test
    // mu_run_test(failing_test);
    return NULL;
}

int main(int argc, char** argv) {
    char* test_failure = all_tests();

    if(test_failure == NULL) {
        printf("test ok!\n");
    } else {
        printf("test failure: %s\n", test_failure);
    }

    printf("tests run: %d\n", tests_run);
}


