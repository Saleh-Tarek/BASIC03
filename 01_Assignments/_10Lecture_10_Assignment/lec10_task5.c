/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Functions
Name        :   Assignment ten - Lecture ten - Problem number five
Program     :   Get a string length
Author      :   Tarek Saleh
==========================================================================================
Description :	(5) Write a function to find the length of a string.

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
unsigned short int APP_u16_tGetStringLength(char Copy_s8_tCharArray[],  char Copy_u8_tQuestion);
/*---------------------------------------------------------------------------------------*/

int main()
{
   	char Local_s8_tCharArray[100],Local_u8_tQuestion;
    signed char Local_u8_tArraySize, Local_u16_tIteratorI;
    unsigned short int Local_u16_tStringLength;
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
    printf("\n\t Please select whether to count the spaces in the string or not.\n");
    printf("\t To count the spaces enter [Y/y]\n\t To ignore the spaces enter [N/n]\n");
    fflush(stdin);
    scanf("%c",&Local_u8_tQuestion);

    switch (Local_u8_tQuestion)
    	{
    		case 'Y':
    		case 'y':
    			Local_u8_tQuestion= 1;
    			break;
    		case 'N':
    		case 'n':
    			Local_u8_tQuestion  =0;
    			break;
    		default:
    			printf("\n*\t Error, Invalid input. \t*\n");
        		return ERROR_VALUE;

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
    Local_u16_tStringLength= APP_u16_tGetStringLength(Local_s8_tCharArray,Local_u8_tQuestion);
         	if(Local_u8_tQuestion == 1)
     	{
    		printf("\n\t\t * String length With spaces is: *\n");
    		printf("\t%hu\n",Local_u16_tStringLength);
     	}
     	else
     	{
    		printf("\n\t\t * String length without spaces is: *\n");
    		printf("\t%hu\n",Local_u16_tStringLength);
     	}


}/** End of Main function*/

/*-------------------------         Function Definision          ------------------------*/
/*---------------------------------------------------------------------------------------*/
unsigned short int APP_u16_tGetStringLength(char Copy_s8_tCharArray[], char Copy_u8_tQuestion)
/*---------------------------------------------------------------------------------------*/
{
    unsigned short int Local_u16_tIteratorI, Local_u16_tStrNoSpaceLength=0,Local_u16_tSpacecount=0;
    for (Local_u16_tIteratorI=0 ; Copy_s8_tCharArray[Local_u16_tIteratorI] != '\0'; Local_u16_tIteratorI++) 
    {
    	if(Copy_s8_tCharArray[Local_u16_tIteratorI] != ' ')
    	{
    		Local_u16_tStrNoSpaceLength += ONE_VALUE;
    	}
    	else
    	{
    		Local_u16_tSpacecount+= ONE_VALUE;	
     	}
	}/** End of first loop*/
     	if(Copy_u8_tQuestion == 1)
     	{
     		return (Local_u16_tStrNoSpaceLength+Local_u16_tSpacecount);
     	}
     	else
     	{
     		return Local_u16_tStrNoSpaceLength;

     	}
}/** End of function*/


