/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Functions
Name        :   Assignment five - Lecture five - Problem number four
Program     :   Print out holes present in a given number.
Author      :   Tarek Saleh
==========================================================================================
Description :   (4) You are designing a poster which prints out numbers with a
				unique style applied to each of them. The styling is based on
				the number of closed paths or holes present in a given number.
				The number of holes that each of the digits from 0 to 9 have
				are equal to the number of closed paths in the digit. 
+
				Their values are:
				• 1, 2, 3, 5 and 7 = 0 holes.
				• 0, 4, 6, and 9 = 1 hole.
				• 8 = 2 holes.
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
unsigned short int APP_u16_tGetHoleCount(signed long int Copy_s32_tNumber);

/*---------------------------------------------------------------------------------------*/

int main ()

{
    signed long int Local_s32_tNumber;
    unsigned short int Local_u16_tHoleCount;
    unsigned char Local_u8_tFlag;
    printf("\n* Please enter a number. *\n");

    if (scanf("%ld",&Local_s32_tNumber) !=1 )
    {
        printf("\n* ERROR, Invalid input! *\n");
        /*
        *	End the program.
        */
        return 1;
    }
    else if (Local_s32_tNumber<0)
    {
    	Local_u8_tFlag = 1;
    	Local_s32_tNumber *= -1;
    }
    else
    {
    	/*
    	*	Do Nothing. 
    	*/
    }
/*-------------------------            Function Call             ------------------------*/
/*---------------------------------------------------------------------------------------*/
    Local_u16_tHoleCount = APP_u16_tGetHoleCount(Local_s32_tNumber);
    if (Local_u8_tFlag == 1)
    {
    	Local_s32_tNumber *= -1;
    }
    else
    {
    	/*
    	*	Do Nothing. 
    	*/    	
    }
    printf("total number of holes in %ld = %hu",Local_s32_tNumber, Local_u16_tHoleCount);
return 0;
}

/*-------------------------         Function Definision          ------------------------*/

/*---------------------------------------------------------------------------------------*/
unsigned short int APP_u16_tGetHoleCount(signed long int Copy_s32_tNumber)
/*---------------------------------------------------------------------------------------*/
{	
	unsigned short int Local_u16_tCounter =0;
	signed long int Local_s32_tNumCheck;
	if(Copy_s32_tNumber==0)
	{
		return 1;
	}
    while( Copy_s32_tNumber != 0 )
    {
    	Local_s32_tNumCheck= Copy_s32_tNumber %10;

		switch (Local_s32_tNumCheck)
  		{
    		case 0 : 
      		case 4 :
      		case 6 : 
      		case 9 : 
      			Local_u16_tCounter +=1;
      			break;
      		case 8 : 
      			Local_u16_tCounter +=2;
      			break;
      		case 1 : 
      		case 2 : 
      		case 3 : 
      		case 5 : 
      		case 7 : 
      			break;
		}

		Copy_s32_tNumber/=10;
	}
    return Local_u16_tCounter;
}
