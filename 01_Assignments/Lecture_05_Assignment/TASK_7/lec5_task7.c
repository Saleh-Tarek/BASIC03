/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Functions
Name        :   Assignment five - Lecture five - Problem number seven
Program     :   Count the maximum zeros Between two ones in a given number
Author      :   Tarek Saleh
==========================================================================================
Description :   (7)Write a C Function that returns the maximum number
                of Zeros between two ones in the number binary.
+
==========================================================================================
*/

/*-------------------------                                      ------------------------*/
/*---------------------------------------------------------------------------------------*/


#include <stdio.h>

#define ZERO_VALUE                                              0
#define ONE_VALUE                                               1
#define TRUE_VALUE												1
#define FALSE_VALUE												0
#define ERROR_VALUE                                            -1
#define EXECUTION_SUCCESS                             			0                                                                   
#define EXECUTION_FAILED                                        1
#define TWO_VALUE                                               2

/*-------------------------        Function Declaration          ------------------------*/
/*---------------------------------------------------------------------------------------*/
unsigned short int APP_u32_tGetMaxZerosCount( signed long int Copy_s32_tNumber);
unsigned long int APP_u32_tConvertToBinary( signed long int Copy_s32_tNumber);

/*---------------------------------------------------------------------------------------*/


int main (){
	unsigned char Local_u8_tFlag=0;
    unsigned short int Local_u16_tResultNum=0;
    signed long int Local_s32_tNumber;

    printf("\n* Please inter a number :\n");
    if (scanf("%ld",&Local_s32_tNumber) != 1 )
    {
        printf("\n* ERROR! Invalid Input  *\n");
        return 1;
    }
    if(Local_s32_tNumber<0)
    {
    	Local_u8_tFlag=1;
    	Local_s32_tNumber *=-1;
    }
/*---------------------------------------------------------------------------------------*/
/*-------------------------            Function Call             ------------------------*/
/*---------------------------------------------------------------------------------------*/
    Local_u16_tResultNum = APP_u32_tGetMaxZerosCount(Local_s32_tNumber);

    printf("\n\t\t*OUTPUT*\nThe maximum number of zeros in %lu is %hu\n",APP_u32_tConvertToBinary(Local_s32_tNumber),Local_u16_tResultNum);
    return 0;
}


/*-------------------------         Function Definision          ------------------------*/
/*---------------------------------------------------------------------------------------*/
unsigned short int APP_u32_tGetMaxZerosCount( signed long int Copy_s32_tNumber)
/*---------------------------------------------------------------------------------------*/
{

	unsigned short int Local_u16_tZerosCount =0,Local_u16_tMaxZeros=0;
	unsigned char Local_u8_tIteratorI, Local_u8_tFlag=0;
	
    while(Copy_s32_tNumber !=0)
    {    
        if ((Copy_s32_tNumber & 1)==1)
        {
            if(Local_u16_tZerosCount > Local_u16_tMaxZeros)
            {
                Local_u16_tMaxZeros = Local_u16_tZerosCount;
            }
            Local_u16_tZerosCount=0;
            Local_u8_tFlag=1;

        }
        else if ((Copy_s32_tNumber&1) == 0 && Local_u8_tFlag ==1)
		{
    		Local_u16_tZerosCount++;
		}
        
        else
        {
            /*
            *   Do Nothing.
            */
        }
		Copy_s32_tNumber/=2;
	}
	return Local_u16_tMaxZeros;
}

unsigned long int APP_u32_tConvertToBinary( signed long int Copy_s32_tNumber)


{
 signed long int Local_s32_tTempNum, Local_u32_tBase = 1, Local_s32_tBinaryNum=0;
    unsigned short int Local_u32_tRemainder;

    Local_s32_tTempNum = Copy_s32_tNumber;

    while(Local_s32_tTempNum > 0)
    {
        Local_u32_tRemainder = Local_s32_tTempNum % 2;
        Local_s32_tBinaryNum = (Local_u32_tRemainder * Local_u32_tBase) + Local_s32_tBinaryNum;
        Local_s32_tTempNum /= 2;
        Local_u32_tBase *= 10;
    }
    printf("\nThe binary representation of %ld = %ld\n", Copy_s32_tNumber,Local_s32_tBinaryNum);
return Local_s32_tBinaryNum;
}


