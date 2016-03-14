#ifndef ___C_UNIT_
#define ___C_UNIT_

extern int tests_run = 0;

char* mu_assert(int message, int test){
    do { if (!(test)) return message; } while (0);

}

int cu_assert_ints_are_equal(int actual_int, int expected_int){
    int output = 0;

    if(expected_int == actual_int){
        return output;
    }
	else{
        printf("Expected: %d, But was: %d\n", expected_int, actual_int);
        output = -1;
    }

    tests_run++;
    return output;
}

int cu_isTrue(char* message, int test){
    int output = 0;

    if (!(test)){
        printf(message);
        output = -1;
    }

    tests_run++;
    return output;
}


#endif