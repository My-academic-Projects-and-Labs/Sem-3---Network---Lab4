// general purpose standard C lib
#include <stdio.h>
#include <stdlib.h> // stdlib includes malloc() and free()


// function prototypes
void generateCRC(char *sendm, char *poly, char *crc);
int checkCRC(char *recvm, char *poly);
void generateHammingCode(char *sendm, int parity, char *output);
int checkMessage(char *recvm, int parity);
void runCRC(char *sendm, char *poly, char **recvm);//CRC
void runHammingCode(char *sendm, int parity, char **recvm);//Hamming Code

//Any additional function prototypes if necessary


int main()
{
    freopen("input.txt", "r", stdin);
    //Read input

    //Call relevant run function
    
    //Call any other function here

    //Free up any malloc-ed memory
	return 0;
}

void runCRC(char *sendm, char *poly, char **recvm) 
{
	//TODO
}

void runHammingCode(char *sendm, int parity, char **recvm) 
{
    //TODO
}

// implementation
void generateCRC(char *sendm, char *poly, char *crc)
{
	//TODO
}
int checkCRC(char *recvm, char *poly)
{
	//TODO
}
void generateHammingCode(char *sendm, int parity, char *output)
{
	//TODO
}
int checkMessage(char *recvm, int parity)
{
	//TODO
}


