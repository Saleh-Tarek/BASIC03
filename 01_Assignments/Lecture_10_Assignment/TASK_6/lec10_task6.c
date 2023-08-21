/*
==========================================================================================
Diploma     :   BASIC03 
Target      :   C Functions
Name        :   Assignment ten - Lecture ten - Problem number six
Program     :   Remove non-alphabet characters in a string
Author      :   Tarek Saleh
==========================================================================================
Description :	(6) Write a function to remove all characters in a string expect alphabets.
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
void APP_voidRemoveNonAlphabet(char Copy_s8_tCharArray[], signed char Copy_u8_tArraySize);
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
    APP_voidRemoveNonAlphabet(Local_s8_tCharArray,Local_u8_tArraySize);
    printf("\n\t\t * Converted string is: *\n");
    for(Local_u16_tIteratorI=0 ; Local_u16_tIteratorI< Local_u8_tArraySize ; Local_u16_tIteratorI++)
    {
        printf("%c",Local_s8_tCharArray[Local_u16_tIteratorI]);
    }
}/** End of Main function*/

/*-------------------------         Function Definision          ------------------------*/
/*---------------------------------------------------------------------------------------*/
void APP_voidRemoveNonAlphabet(char Copy_s8_tCharArray[], signed char Copy_u8_tArraySize)
/*---------------------------------------------------------------------------------------*/
{
    unsigned short int Local_u16_tIteratorI,Local_u16_tIteratorJ;
    for (Local_u16_tIteratorI=0 ; Copy_s8_tCharArray[Local_u16_tIteratorI] != '\0' ; Local_u16_tIteratorI++) 
    {
    	
    	//if(((Copy_s8_tCharArray[Local_u16_tIteratorI] > 'A') && (Copy_s8_tCharArray[Local_u16_tIteratorI]< 'Z'))||((Copy_s8_tCharArray[Local_u16_tIteratorI] > 'a' )&& (Copy_s8_tCharArray[Local_u16_tIteratorI] < 'z')))
    	if((Copy_s8_tCharArray[Local_u16_tIteratorI]>= 'A')&&(Copy_s8_tCharArray[Local_u16_tIteratorI]<='Z')||(Copy_s8_tCharArray[Local_u16_tIteratorI]>='a')&&(Copy_s8_tCharArray[Local_u16_tIteratorI]<='z'))
    	{
			printf("I %d_ %c\n",Local_u16_tIteratorI,Copy_s8_tCharArray[Local_u16_tIteratorI]);

    		/**
    		* Do nothing.
    		* */
    	}
    	else
    	{
			printf("K %d_ %c\n",Local_u16_tIteratorI,Copy_s8_tCharArray[Local_u16_tIteratorI]);
// t2/3#r t/3#r t3#r t#r tr
   			for (Local_u16_tIteratorJ=Local_u16_tIteratorI ; Copy_s8_tCharArray[Local_u16_tIteratorJ]!='\0' ; Local_u16_tIteratorJ++) 
    			{
   					Copy_s8_tCharArray[Local_u16_tIteratorJ]=Copy_s8_tCharArray[Local_u16_tIteratorJ+1];

	   			}/** End of Second loop*/	
   			printf("J %d_ %c\n",Local_u16_tIteratorJ,Copy_s8_tCharArray[Local_u16_tIteratorI]);
   			printf("J %d_ %c\n",Local_u16_tIteratorI,Copy_s8_tCharArray[Local_u16_tIteratorI]);
   			Local_u16_tIteratorI -=1; 
   			/**
   			 * Decrementing the I iterator by one to recheck again the current index incase 
   			 * double non alphabet exists.
   			 * */
	    }
	}/** End of first loop*/
}/** End of function*/


