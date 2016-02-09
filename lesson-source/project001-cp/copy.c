#include<stdio.h>

/* forward declare copy - otherwise this won't compile */
int copy(char* source, char* destination);

int main(int argc, char** argv) {
    char* source;
    char* destination;

    /* fail and print usage unless we have 2 arguments */ 
    if(argc != 3) {
        fprintf(stderr, "Usage: %s <source> <destination>\n\n", argv[0]);
        return 1;
    }

    source = argv[1];
    destination = argv[2];
    if(copy(source, destination)) {
        fprintf(stderr, "copy failed due to reasons!\n\n");
        return 2;
    }

    return 0;
}

int copy(char* source, char* destination) {
    return 1;
}
