/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Functions
Name        :   Assignment ten - Lecture ten - Problem number seven
Program     :   Reverce a string
Author      :   Tarek Saleh
==========================================================================================
Description :	(7) Write a function to reverse a string passed to it.


+
==========================================================================================
*/
/*-------------------------                                      ------------------------*/
/*---------------------------------------------------------------------------------------*/

#include <stdio.h>

#define ZERO_VALUE                                              0
#define ONE_VALUE                                               1
#define TRUE_VALUE                                              1
#define FALSE_VALUE                                             0
#define ERROR_VALUE                                            -1
#define EXECUTION_SUCCESS                                       0                                                                   
#define EXECUTION_FAILED                                        1
#define TWO_VALUE                                               2
#define STRING_TERMENATOR                                       \0

/*-------------------------        Function Declaration          ------------------------*/
/*---------------------------------------------------------------------------------------*/
unsigned short int APP_u16_tGetStringLength(char Copy_s8_tCharArray[]);
/*---------------------------------------------------------------------------------------*/

/*-------------------------        Function Declaration          ------------------------*/
/*---------------------------------------------------------------------------------------*/
void APP_voidReverseString(char Copy_s8_tCharArray[]);
/*---------------------------------------------------------------------------------------*/

int main()
{
   	char Local_s8_tCharArray[100];
    signed char Local_u8_tArraySize, Local_u16_tIteratorI;
    printf("\t*\t PROGRAM STARTED \t*\t\n");
    printf("Please enter the array size.\n");
    scanf("%hhu",&Local_u8_tArraySize);
     if(Local_u8_tArraySize <=0)
        {
        	printf("\n*\t Error, Invalid input. \t*\n");
        	return ERROR_VALUE;
        }
        else
        {
        	/**
        	 * Do Nothing. And continue the program normally.
        	 * */
        }
    printf("Now please enter a string.\n\n");
    fflush(stdin);
    scanf("%[^\n]%*c",Local_s8_tCharArray);

    for(Local_u16_tIteratorI=0 ; Local_u16_tIteratorI< Local_u8_tArraySize ; Local_u16_tIteratorI++)
    {
    	//scanf("%hu",&Local_s8_tCharArray[Local_u16_tIteratorI]);
        if(Local_s8_tCharArray[Local_u16_tIteratorI]<0)
        {
        	printf("\n*\t Error, Invalid input. \t*\n");
        	return ERROR_VALUE;
        }
        else
        {
        	/**
        	 * Do Nothing. And continue the program normally.
        	 * */
        }
    }
/*---------------------------------------------------------------------------------------*/
/*-------------------------            Function Call             ------------------------*/
/*---------------------------------------------------------------------------------------*/
    printf("\n\t\t * Before Reversed string is: *\n");
    for(Local_u16_tIteratorI=0 ; Local_u16_tIteratorI< Local_u8_tArraySize ; Local_u16_tIteratorI++)
    {
        printf("%c",Local_s8_tCharArray[Local_u16_tIteratorI]);
    }
    APP_voidReverseString(Local_s8_tCharArray);
    
    printf("\n\t\t * Reversed string is: *\n");
    for(Local_u16_tIteratorI=0 ; Local_u16_tIteratorI< Local_u8_tArraySize ; Local_u16_tIteratorI++)
    {
        printf("%c",Local_s8_tCharArray[Local_u16_tIteratorI]);
    }
}/** End of Main function*/

/*-------------------------         Function Definision          ------------------------*/
/*---------------------------------------------------------------------------------------*/
void APP_voidReverseString(char Copy_s8_tCharArray[])
/*---------------------------------------------------------------------------------------*/
{
    unsigned short int Local_u16_tIteratorI,Local_u16_tIteratorJ;
    char Local_s8_tTempValue,Local_u8_tArraySize;
    
    Local_u8_tArraySize= (APP_u16_tGetStringLength(Copy_s8_tCharArray));

    for (Local_u16_tIteratorI=0 ; Local_u16_tIteratorI <= Local_u8_tArraySize/2 ; Local_u16_tIteratorI++) 
    {
		Local_u16_tIteratorJ = Local_u8_tArraySize -Local_u16_tIteratorI;
    	Local_s8_tTempValue	= Copy_s8_tCharArray[Local_u16_tIteratorJ];    		
   		Copy_s8_tCharArray[Local_u16_tIteratorJ]=Copy_s8_tCharArray[Local_u16_tIteratorI];
		Copy_s8_tCharArray[Local_u16_tIteratorI]=  Local_s8_tTempValue;   

	}/** End of first loop*/

}/** End of function*/



/*-------------------------         Function Definision          ------------------------*/
/*---------------------------------------------------------------------------------------*/
unsigned short int APP_u16_tGetStringLength(char Copy_s8_tCharArray[])
/*---------------------------------------------------------------------------------------*/
{
    unsigned short int Local_u16_tIteratorI, Local_u16_tStrNoSpaceLength=0,Local_u16_tSpacecount=0;
    for (Local_u16_tIteratorI=0 ; Copy_s8_tCharArray[Local_u16_tIteratorI] != '\0'; Local_u16_tIteratorI++) 
    {
		Local_u16_tSpacecount+=1;
	}/** End of first loop*/
   	return Local_u16_tSpacecount;
}/** End of function*/



