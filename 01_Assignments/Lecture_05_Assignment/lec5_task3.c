/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Functions
Name        :   Assignment five - Lecture five - Problem number three
Program     :   Prime numbers between intervals
Author      :   Tarek Saleh
==========================================================================================
Description :   (2) write a C Function that display Prime Numbers between Intervals
                    (two numbers).
+
Note        :   By this definition, primes are integers greater than one 
                with no positive divisors besides one and itself.
                Negative numbers are excluded.
==========================================================================================
*/

/*-------------------------                                      ------------------------*/
/*---------------------------------------------------------------------------------------*/


#include <stdio.h>

#define ZERO_VALUE                                              0
#define ONE_VALUE                                               1
#define ERROR_VALUE                                            -1
#define EXECUTION_SUCCESS                                       0                                                                   
#define EXECUTION_FAILED                                        1
#define TWO_VALUE                                               2

/*-------------------------        Function Declaration          ------------------------*/

/*---------------------------------------------------------------------------------------*/
void APP_voidGetPrimInterval(unsigned long int Copy_u32_tNumOne,unsigned long int Copy_u32_tNumTwo);
/*---------------------------------------------------------------------------------------*/


int main ()

{
    signed long int Local_s32_tNumOne ,Local_s32_tNumTwo;
    unsigned long int Local_u32_tTempNum;
    printf("\n* Please enter two Positive numbers *\n");
    
    if (scanf("%ld\n%ld",&Local_s32_tNumOne,&Local_s32_tNumTwo) != TWO_VALUE )
    {
        printf("\n* ERROR, Invalid input. *\n");
        return (EXECUTION_FAILED);
    }
    else if (Local_s32_tNumOne < ZERO_VALUE || Local_s32_tNumTwo < ZERO_VALUE)
    {
        printf("\n* ERROR, Negative numbers are excluded. *\n");
        return (EXECUTION_FAILED);

    }

    else if (Local_s32_tNumOne>Local_s32_tNumTwo)
    {   
        Local_u32_tTempNum  =   Local_s32_tNumOne;
        Local_s32_tNumOne   =   Local_s32_tNumTwo ;
        Local_s32_tNumTwo   =   Local_u32_tTempNum;
    }
    else
    {
        /*
        *   Do nothing. 
        */
    }
/*-------------------------             Function Call              ------------------------*/

    APP_voidGetPrimInterval(Local_s32_tNumOne,Local_s32_tNumTwo);
    printf("\n\t* Program Ended *\t\n");
    return (EXECUTION_SUCCESS);
}

void APP_voidGetPrimInterval(unsigned long int Copy_s32_tNumOne,unsigned long int Copy_s32_tNumTwo)
{

    unsigned long int Local_u32_tIteratorI , Local_u32_tIteratorJ ;
    unsigned char Local_u8_tFlag = ONE_VALUE ; // Local_u8_tFlag to indicates the number prime or not

    printf("\n\t\t*OUTPUT*\nThe prime numbers between %ld and %ld\n[ ",Copy_s32_tNumOne ,Copy_s32_tNumTwo);

    if(Copy_s32_tNumOne == ZERO_VALUE || Copy_s32_tNumOne == ONE_VALUE)
    {
        Copy_s32_tNumOne = TWO_VALUE;
    }
    for(Local_u32_tIteratorI=Copy_s32_tNumOne;Local_u32_tIteratorI <= Copy_s32_tNumTwo;Local_u32_tIteratorI++)
    {
        for(Local_u32_tIteratorJ=TWO_VALUE;Local_u32_tIteratorJ <= (Local_u32_tIteratorI/TWO_VALUE) && (Local_u8_tFlag == ONE_VALUE);Local_u32_tIteratorJ++)
        { 
            if ((Local_u32_tIteratorI % Local_u32_tIteratorJ == ZERO_VALUE) )
            {
                Local_u8_tFlag = ZERO_VALUE;
            }
        }
        if (Local_u8_tFlag == ZERO_VALUE )
        {
            Local_u8_tFlag = ONE_VALUE;
        }
        else 
        {
            printf("%lu ",Local_u32_tIteratorI);
        }
  }
  printf(" ]\n");
}
