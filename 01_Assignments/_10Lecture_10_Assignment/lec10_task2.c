/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Functions
Name        :   Assignment ten - Lecture ten - Problem number two
Program     :   
Author      :   Tarek Saleh
==========================================================================================
Description :	(2) Write a C function that use the bubble sorting algorithm to sort
				an integer array in descending order.

+
			Bubble Sort is the simplest sorting algorithm that works by
			repeatedly swapping the adjacent elements if they are in the wrong order.
			
			This algorithm is not suitable for large data sets as its average
			and worst-case time complexity is quite high.
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
void APP_voidDescendingBubbleSort(signed short int Copy_s16_tIntegerArray[], unsigned char Copy_u8_tArraySize);
/*---------------------------------------------------------------------------------------*/


int main()
{
   	signed short int Local_s16_tIntegerArray[100];
    unsigned char Local_u8_tArraySize, Local_u16_tIteratorI;
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

    APP_voidDescendingBubbleSort(Local_s16_tIntegerArray,Local_u8_tArraySize);


     printf("\n\t\t * Sorted Elements are: *\n");
    for(Local_u16_tIteratorI=0 ; Local_u16_tIteratorI< Local_u8_tArraySize ; Local_u16_tIteratorI++)
    {
        printf("* Element number [%d]: %hu\n",(Local_u16_tIteratorI+1),Local_s16_tIntegerArray[Local_u16_tIteratorI]);
    }

}
/*-------------------------         Function Definision          ------------------------*/
/*---------------------------------------------------------------------------------------*/
void APP_voidDescendingBubbleSort(signed short int Copy_s16_tIntegerArray[], unsigned char Copy_u8_tArraySize)
/*---------------------------------------------------------------------------------------*/
{
    unsigned short int Local_u16_tTempVariable, Local_u16_tIteratorI, Local_u16_tIteratorJ;
    unsigned char Local_u8_tFlag=0;
    for (Local_u16_tIteratorI=0 ; Local_u16_tIteratorI<Copy_u8_tArraySize-1 ; Local_u16_tIteratorI++) {


        for (Local_u16_tIteratorJ=0 ; Local_u16_tIteratorJ<Copy_u8_tArraySize-Local_u16_tIteratorI-1 ; Local_u16_tIteratorJ++) {

            if (Copy_s16_tIntegerArray[Local_u16_tIteratorJ] < Copy_s16_tIntegerArray[Local_u16_tIteratorJ + 1]) 
            {
                Local_u16_tTempVariable = Copy_s16_tIntegerArray[Local_u16_tIteratorJ];
                Copy_s16_tIntegerArray[Local_u16_tIteratorJ] = Copy_s16_tIntegerArray[Local_u16_tIteratorJ + 1];
                Copy_s16_tIntegerArray[Local_u16_tIteratorJ + 1] = Local_u16_tTempVariable;
                Local_u8_tFlag=1;
            }
        }

        if (Local_u8_tFlag == 0){
            break;
        }
    }
}
