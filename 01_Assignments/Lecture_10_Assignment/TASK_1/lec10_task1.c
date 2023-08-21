/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Functions
Name        :   Assignment ten - Lecture ten - Problem number one
Program     :   
Author      :   Tarek Saleh
==========================================================================================
Description :   (1) Write a function which, given a string, return TRUE if all
                characters are distinct and FALSE if any character is repeated.
                (assume TRUE as 1, FALSE as 0)

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
unsigned char APP_u8_tDistinctChar(const char Copy_u8_tStringArray[]);
/*---------------------------------------------------------------------------------------*/

int main()
{
    char Local_u8_tStringArray[100];
    printf("\t*\t PROGRAM STARTED \t*\t\n");
    printf("Please enter a string to check.\n");
    scanf("%[^\n]%*c",Local_u8_tStringArray);
    //gets(Local_u8_tStringArray);

/*---------------------------------------------------------------------------------------*/
/*-------------------------            Function Call             ------------------------*/
/*---------------------------------------------------------------------------------------*/
    if(APP_u8_tDistinctChar(Local_u8_tStringArray))
    {
        printf("\n\t\t*TRUE_VALUE*\nAll the string characters are distinct.\t\n");
    }
    
    else
    {
        printf("\n\t\t*FALSE_VALUE*\nNot all the string characters are distinct.\t\n");
    }

}





/*-------------------------         Function Definision          ------------------------*/
/*---------------------------------------------------------------------------------------*/
unsigned char APP_u8_tDistinctChar(const char Copy_u8_tStringArray[])
/*---------------------------------------------------------------------------------------*/
{

    unsigned short int Local_u16_tIteratorI , Local_u16_tIteratorJ;
    unsigned char      Local_u8_tFlag ;

    for(Local_u16_tIteratorI=0 ; Copy_u8_tStringArray[Local_u16_tIteratorI] != '\0'  ; Local_u16_tIteratorI++)
    {
        if(Copy_u8_tStringArray[Local_u16_tIteratorI] == ' ') 
            {
                continue;
            }
        for(Local_u16_tIteratorJ=Local_u16_tIteratorI+1 ; Copy_u8_tStringArray[Local_u16_tIteratorJ] != '\0' ; Local_u16_tIteratorJ++) 
        {
            if (Copy_u8_tStringArray[Local_u16_tIteratorI] == Copy_u8_tStringArray[Local_u16_tIteratorJ]) 
            {
                printf("\n\t* Repeated character is %c *\t\n",Copy_u8_tStringArray[Local_u16_tIteratorI]);
                Local_u8_tFlag =1;

            }
        }
    }
    if(Local_u8_tFlag==1)
    {
        return FALSE_VALUE;
    }
    else
    {
       return TRUE_VALUE ;
    }
}
