#include <stdlib.h>
#include <stdio.h>

//This is a test
resetTheBoard(int* board_pointer){

	int length = sizeof(board_pointer);
	int index = 0;

	while(index < length)
	{
		board_pointer[index] = 0;
		index++;
	}
}

//<NA>: Print each bit. Rather than each byte:
printTheBoard(int* board_pointer){

	int length = sizeof(board_pointer);
	int index = 0;

	char testChar = 0;
	int i;
	//Test to understand representing a bit:
	for (i = 0; i < 7; i = i + 1)
	{
		char bit = testChar >> i;
		printf("%01x", bit);
	}

/*
	//while(index < length)
	while(index < length)		
	{

		//Shift and print each bit:
		for (int i = 0; i < 7; ++i)
		{
			char bit = board_pointer[index] >> i;
			printf("%01x", bit);
		}


		printf("%02x", board_pointer[index]);
		printf("\n");
		index++;
	}

*/
}

void printBitsInByte(int byte){
	int i;

	//Shift to look at the byte:
	for (i = 0; i <= 7; i++)
	{
		char bitShifted = byte >> i;

		char bitMask = (char) 1;
		char output = bitShifted & bitMask;

		if(output == 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}

int main (int argc, char* argv[]){
	
/*
	int board_width = 8;
	int total_size = board_width * board_width;
	total_size = total_size / 8; //Converting bits to bytes;

	int* board_pointer = (int *) malloc(sizeof(total_size)); 
*/
	if(argc != 2){
		printf("I need a single argument for the byte test  /n");
		return 1;
	}

	int val = atoi(argv[1]);

	printBitsInByte(val);

	printf("\n");
}
