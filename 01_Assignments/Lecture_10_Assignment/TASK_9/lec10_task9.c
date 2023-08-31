/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Functions
Name        :   Assignment ten - Lecture ten - Problem number three
Program     :   Sorting  an integer array using insertion sort.
Author      :   Tarek Saleh
==========================================================================================
Description :	(9) write a C function that use the insertion sort algorithm to sort
					an integer array in ascending order.


+
				Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.
			
				Insertion Sort Algorithm:
				To sort an array of size N in ascending order iterate over the array and compare the current element (key) to its predecessor, if the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped

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
void APP_voidAscencingInsertionSort(signed short int Copy_s16_tIntegerArray[], signed char Copy_u8_tArraySize);
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
    printf("Call function\n");
    APP_voidAscencingInsertionSort(Local_s16_tIntegerArray,Local_u8_tArraySize);


     printf("\n\t\t * Sorted Elements are: *\n");
    for(Local_u16_tIteratorI=0 ; Local_u16_tIteratorI< Local_u8_tArraySize ; Local_u16_tIteratorI++)
    {
        printf("* Element number [%d]: %hu\n",(Local_u16_tIteratorI+1),Local_s16_tIntegerArray[Local_u16_tIteratorI]);
    }
}/** End of Main function*/

/*-------------------------         Function Definision          ------------------------*/
/*---------------------------------------------------------------------------------------*/
void APP_voidAscencingInsertionSort(signed short int Copy_s16_tIntegerArray[], signed char Copy_u8_tArraySize)
/*---------------------------------------------------------------------------------------*/
{
    unsigned short int Local_u16_tKeyElement, Local_u16_tIteratorI, Local_u16_tIteratorJ;
   printf("1_ %hu\n",Local_u16_tIteratorI);
    for(Local_u16_tIteratorI=1;Local_u16_tIteratorI<Copy_u8_tArraySize;Local_u16_tIteratorI++)
    {
		Local_u16_tKeyElement= Copy_s16_tIntegerArray[Local_u16_tIteratorI];	
    	printf("2_ %hu\n",Local_u16_tIteratorI);
    	for(Local_u16_tIteratorJ=Local_u16_tIteratorI-1; Local_u16_tIteratorJ>0;Local_u16_tIteratorJ--)
    	{
    		printf("3_ %hu\n",Local_u16_tIteratorI);
			if(Copy_s16_tIntegerArray[Local_u16_tIteratorJ] >Local_u16_tKeyElement)
    		{
    			printf("4_ %hu\n",Local_u16_tIteratorI);
    			Copy_s16_tIntegerArray[Local_u16_tIteratorJ+1]=Copy_s16_tIntegerArray[Local_u16_tIteratorJ];
	    	}
	    	printf("5_ %hu\n",Local_u16_tIteratorI);
    	}
    	Copy_s16_tIntegerArray[Local_u16_tIteratorJ+1]= Local_u16_tKeyElement;
    	printf("6_ %hu\n",Local_u16_tIteratorI);
    }
    printf("7_ %hu\n",Local_u16_tIteratorI);


}/** End of function*/





/*  printf("0_ %hhu\n",Copy_u8_tArraySize);
    for (Local_u16_tIteratorI=1 ; Local_u16_tIteratorI<Copy_u8_tArraySize ; Local_u16_tIteratorI++) 
    {
            printf("1_ %hu\n",Local_u16_tIteratorI);

        Local_u16_tTargetElement= Copy_s16_tIntegerArray[Local_u16_tIteratorI];
        if(Copy_s16_tIntegerArray[Local_u16_tIteratorJ]>Local_u16_tTargetElement )
        {
     	    printf("2_ %hu\n",Local_u16_tIteratorI);

     	   for (Local_u16_tIteratorJ=Local_u16_tIteratorI-1 ; Local_u16_tIteratorJ>=0 ; Local_u16_tIteratorJ--) 
        	{

            	Copy_s16_tIntegerArray[Local_u16_tIteratorJ+1]=Copy_s16_tIntegerArray[Local_u16_tIteratorJ];
            	printf("3_ %hu\n",Local_u16_tIteratorJ);

	        } 
            Copy_s16_tIntegerArray[Local_u16_tIteratorJ+1]=  Local_u16_tTargetElement;            
		}
		else
		{
			printf("4_ %hu\n",Local_u16_tIteratorI);
		}	
	}
		printf("5_ %hu\n",Local_u16_tIteratorI);
*/