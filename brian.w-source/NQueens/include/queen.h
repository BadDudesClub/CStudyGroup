#ifndef ___QUEEN_
#define ___QUEEN_

int isInDanger(int board, int xCoord, int yCoord, int width){


}

int* getRow(int board, int xCoord, int yCoord, int width){
    int beg = yCoord * width;
    int end = beg + (width - 1);

    int cardinality = end - beg;
    int* rowElements = (int *) malloc(sizeof(cardinality));

    return rowElements;
}

int* getDownwardSlope(int board, int xCoord, int yCoord, int width){
    int interval = width + 1;
    int beg = (yCoord * xCoord) - width;
    int end = (interval * xCoord) + beg;

    interval
    int* rowElements = (int *) malloc(sizeof(cardinality));

    return rowElements;
}

int getIndex (int board, int xCoord, int yCoord, int width){



}



#endif