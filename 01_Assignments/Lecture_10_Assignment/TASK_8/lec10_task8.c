/*
==========================================================================================
Diploma     :   BASIC03 
Target      :   C Functions
Name        :   Assignment ten - Lecture ten - Problem number seven
Program     :   Concatenate two strings.
Author      :   Tarek Saleh
==========================================================================================
Description :	((8) Write a function to concatenate two strings.

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
void APP_voidConcatenateString(char Copy_s8_tCharArrayOne[],char Copy_s8_tCharArrayTwo[]);
/*---------------------------------------------------------------------------------------*/

int main()
{
   	char Local_s8_tCharArrayOne[100], Local_s8_tCharArrayTwo[100];
    signed char Local_u8_tArraySize, Local_u16_tIteratorI;
    printf("\t*\t PROGRAM STARTED \t*\t\n");
    printf("Please enter both arrays size.\n");
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
    printf("Now please enter the first string.\n\n");
    fflush(stdin);
    scanf("%[^\n]%*c",Local_s8_tCharArrayOne);
    printf("And please enter the second string.\n\n");
    fflush(stdin);
    scanf("%[^\n]%*c",Local_s8_tCharArrayTwo);

    for(Local_u16_tIteratorI=0 ; Local_u16_tIteratorI< Local_u8_tArraySize ; Local_u16_tIteratorI++)
    {
    	//scanf("%hu",&Local_s8_tCharArrayOne[Local_u16_tIteratorI]);
        if(Local_s8_tCharArrayOne[Local_u16_tIteratorI]<0||Local_s8_tCharArrayOne[Local_u16_tIteratorI]<0)
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
    printf("\n\t\t * The first entered string is: *\n");
    for(Local_u16_tIteratorI=0 ; Local_s8_tCharArrayOne[Local_u16_tIteratorI]!='\0' ; Local_u16_tIteratorI++)
    {
        printf("%c",Local_s8_tCharArrayOne[Local_u16_tIteratorI]);
    }
    printf("\n\t\t * The second entered string is: *\n");
    for(Local_u16_tIteratorI=0 ; Local_s8_tCharArrayTwo[Local_u16_tIteratorI]!='\0'  ; Local_u16_tIteratorI++)
    {
        printf("%c",Local_s8_tCharArrayTwo[Local_u16_tIteratorI]);
    }
    APP_voidConcatenateString(Local_s8_tCharArrayOne,Local_s8_tCharArrayTwo);
    
    printf("\n\t\t * Concatenated string is: *\n");
    for(Local_u16_tIteratorI=0 ; Local_s8_tCharArrayOne[Local_u16_tIteratorI] !='\0' ; Local_u16_tIteratorI++)
    {
        printf("%c",Local_s8_tCharArrayOne[Local_u16_tIteratorI]);
    }
}/** End of Main function*/

/*-------------------------         Function Definision          ------------------------*/
/*---------------------------------------------------------------------------------------*/
void APP_voidConcatenateString(char Copy_s8_tCharArrayOne[],char Copy_s8_tCharArrayTwo[])
/*---------------------------------------------------------------------------------------*/
{
    unsigned short int Local_u16_tIteratorI;
    unsigned char Local_u8_tArrayOneSize,Local_u8_tArrayTwoSize;
    
    Local_u8_tArrayOneSize= (APP_u16_tGetStringLength(Copy_s8_tCharArrayOne));
    Local_u8_tArrayTwoSize= (APP_u16_tGetStringLength(Copy_s8_tCharArrayTwo));
    printf("\nThe first array size is %hhu\nThe second array size is %hhu\n",Local_u8_tArrayOneSize,Local_u8_tArrayTwoSize);
    for (Local_u16_tIteratorI=0 ; Local_u16_tIteratorI <= Local_u8_tArrayTwoSize ; Local_u16_tIteratorI++) 
    {
        //printf("%hu\n",Local_u16_tIteratorI);
        Copy_s8_tCharArrayOne[Local_u8_tArrayOneSize+Local_u16_tIteratorI]= Copy_s8_tCharArrayTwo[Local_u16_tIteratorI];
	}/** End of first loop*/
        //printf("%hu\n",Local_u16_tIteratorI);

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



