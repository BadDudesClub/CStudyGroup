#ifndef ___BOARD_
#define ___BOARD_

int insert_bit(int index, int store, int bit) {
    int mask = 1;

    if(0 > index || index > 16)
        return -1;

    if(0 > bit || bit > 1)
        return -1;

    mask = mask << index;

    if(bit == 1)
        return store | mask;

    return store ^ mask;
}

#endif