#ifndef ___BOARD_
#define ___BOARD_

int insert_bit(int *board, int xCoord, int yCoord, int bit) {

    if(0 > xCoord || xCoord > 7)
        return -1;

    if(0 > yCoord || yCoord > 7)
        return -1;

    if(0 > bit || bit > 1)
        return -1;

    int index = (yCoord * 8) + xCoord;

    board[index] = bit;

    return 1;
}

int get_bit(int *board, int xCoord, int yCoord){

    if(0 > xCoord || xCoord > 7)
        return -1;

    if(0 > yCoord || yCoord > 7)
        return -1;

    int index = (yCoord * 8) + xCoord;

    return board[index];
}

#endif