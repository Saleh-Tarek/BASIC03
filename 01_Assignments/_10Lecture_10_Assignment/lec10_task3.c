/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Functions
Name        :   Assignment ten - Lecture ten - Problem number three
Program     :   
Author      :   Tarek Saleh
==========================================================================================
Description :	(3) write a C function that use the selection sorting algorithm to
				sort an integer array in ascending order.

+
				Selection sort is a simple and efficient sorting algorithm
				that works by repeatedly selecting the smallest (or largest) element
				from the unsorted portion of the list and moving it to
				the sorted portion of the list. 

				The algorithm repeatedly selects the smallest (or largest) element
				from the unsorted portion of the list and swaps it
				with the first element of the unsorted part.
				This process is repeated for the remaining unsorted portion until
				the entire list is sorted. 


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
void APP_voidAscencingSelectionSort(signed short int Copy_s16_tIntegerArray[], signed char Copy_u8_tArraySize);
/*---------------------------------------------------------------------------------------*/

int main()
{
   	signed short int Local_s16_tIntegerArray[100];
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
    printf("Now please enter the array elements.\nOnly positive number is accepted.\n");

    for(Local_u16_tIteratorI=0 ; Local_u16_tIteratorI< Local_u8_tArraySize ; Local_u16_tIteratorI++)
    {
    	scanf("%hu",&Local_s16_tIntegerArray[Local_u16_tIteratorI]);
        if(Local_s16_tIntegerArray[Local_u16_tIteratorI]<0)
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
    APP_voidAscencingSelectionSort(Local_s16_tIntegerArray,Local_u8_tArraySize);


     printf("\n\t\t * Sorted Elements are: *\n");
    for(Local_u16_tIteratorI=0 ; Local_u16_tIteratorI< Local_u8_tArraySize ; Local_u16_tIteratorI++)
    {
        printf("* Element number [%d]: %hu\n",(Local_u16_tIteratorI+1),Local_s16_tIntegerArray[Local_u16_tIteratorI]);
    }
}/** End of Main function*/

/*-------------------------         Function Definision          ------------------------*/
/*---------------------------------------------------------------------------------------*/
void APP_voidAscencingSelectionSort(signed short int Copy_s16_tIntegerArray[], signed char Copy_u8_tArraySize)
/*---------------------------------------------------------------------------------------*/
{
    unsigned short int Local_u16_tTempVariable, Local_u16_tIteratorI, Local_u16_tIteratorJ, Local_u16_tMidElement;
    unsigned char Local_u8_tFlag=0;
    for (Local_u16_tIteratorI=0 ; Local_u16_tIteratorI<Copy_u8_tArraySize-1 ; Local_u16_tIteratorI++) 
    {
        Local_u16_tMidElement= Local_u16_tIteratorI;
        for (Local_u16_tIteratorJ=Local_u16_tIteratorI+1 ; Local_u16_tIteratorJ<Copy_u8_tArraySize ; Local_u16_tIteratorJ++) 
        {

            if (Copy_s16_tIntegerArray[Local_u16_tIteratorJ] < Copy_s16_tIntegerArray[Local_u16_tMidElement]) 
            {
               Local_u16_tMidElement = Local_u16_tIteratorJ;
            }
        } /** End of second loop*/
        if(Local_u16_tMidElement != Local_u16_tIteratorI)
        { // check if the index has changed or not
            Local_u16_tTempVariable =Copy_s16_tIntegerArray[Local_u16_tIteratorI];
            Copy_s16_tIntegerArray[Local_u16_tIteratorI]=Copy_s16_tIntegerArray[Local_u16_tMidElement];
            Copy_s16_tIntegerArray[Local_u16_tMidElement]=Local_u16_tTempVariable ;
        }
	}/** End of first loop*/
}/** End of function*/


