/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Functions
Name        :   Assignment ten - Lecture ten - Problem number four
Program     :   Convert uppercase letters to lowercase in a string
Author      :   Tarek Saleh
==========================================================================================
Description :	(4) Write a function which, given a string, converts all upper case
				letters to lowercase, leaving the others unchanged.

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
void APP_voidConvertStringToLowercase(char Copy_s8_tCharArray[], signed char Copy_u8_tArraySize);
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
    APP_voidConvertStringToLowercase(Local_s8_tCharArray,Local_u8_tArraySize);
     printf("\n\t\t * Converted string is: *\n");
    for(Local_u16_tIteratorI=0 ; Local_u16_tIteratorI< Local_u8_tArraySize ; Local_u16_tIteratorI++)
    {
        printf("%c ",Local_s8_tCharArray[Local_u16_tIteratorI]);
    }
}/** End of Main function*/

/*-------------------------         Function Definision          ------------------------*/
/*---------------------------------------------------------------------------------------*/
void APP_voidConvertStringToLowercase(char Copy_s8_tCharArray[], signed char Copy_u8_tArraySize)
/*---------------------------------------------------------------------------------------*/
{
    unsigned short int Local_u16_tIteratorI;
    for (Local_u16_tIteratorI=0 ; Copy_s8_tCharArray[Local_u16_tIteratorI] != '\0' ; Local_u16_tIteratorI++) 
    {
    	if(Copy_s8_tCharArray[Local_u16_tIteratorI] >= 'A' && Copy_s8_tCharArray[Local_u16_tIteratorI] <= 'Z')
    	{
    		Copy_s8_tCharArray[Local_u16_tIteratorI] += ('a'-'A');
    		//printf("%c\n",Copy_s8_tCharArray[Local_u16_tIteratorI]);
    	}
    	else
    	{
    		/**
    		 * Do nothing.
    		 * */
    	}
	}/** End of first loop*/
}/** End of function*/


