/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Functions
Name        :   Assignment five - Lecture five - Problem number five
Program     :   Find whether a number is power of 2 or 3
Author      :   Tarek Saleh
==========================================================================================
Description :   (5) Write a C function that returns 1 if the input number is a
				power of 2 and return 0 if the input number is power of 3,
				otherwise it shall return -1.

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
#define EXECUTION_SUCCESS                                       0                                                                   
#define EXECUTION_FAILED                                        1
#define TWO_VALUE                                               2

/*-------------------------        Function Declaration          ------------------------*/

/*---------------------------------------------------------------------------------------*/
unsigned short int APP_u16_tGetPowerOfNumber( float Copy_f32_tNumber);

/*---------------------------------------------------------------------------------------*/


int main ()
{
    float Local_f32_tNumber ;
    unsigned short int Local_u16_tResultNum;
    unsigned char Local_u8_tFlag=0;
    printf("\n* Please enter a number. *\n");
    if (scanf("%f",&Local_f32_tNumber) != 1)
    {  
    	printf("\n* ERROR, Invalid input. *\n");
        return 1;
    }
    if(Local_f32_tNumber<0)
    {
    	Local_u8_tFlag=1;
    	Local_f32_tNumber *=-1;
    }


/*-------------------------            Function Call             ------------------------*/
/*---------------------------------------------------------------------------------------*/
    Local_u16_tResultNum = APP_u16_tGetPowerOfNumber(Local_f32_tNumber);


    if(Local_u16_tResultNum == 1 && Local_u8_tFlag ==0)
     {
        printf("%.3f is a power of 2 \n",Local_f32_tNumber);
    }
    else if(Local_u16_tResultNum == 0 && Local_u8_tFlag ==0)
    {
        printf("%.3f is power of 3\n",Local_f32_tNumber);
    }
    else if(Local_u16_tResultNum == 0 && Local_u8_tFlag ==1)
    {
        printf("%.3f is power of 3\n",(-1* Local_f32_tNumber));
    }
    else if(Local_u16_tResultNum == 1 && Local_u8_tFlag == 1)
    {
        printf("%.3f is neither a power of 2 nor 3\n",Local_f32_tNumber);
    }
    else if(Local_f32_tNumber == 0)
    {
    	printf("Zero to the power of any non-zero number is always zero.\n");
    }
    else 
    {
        printf("%.3f is neither a power of 2 nor 3\n",Local_f32_tNumber);
    }

return 0;
}

/*-------------------------         Function Definision          ------------------------*/

/*---------------------------------------------------------------------------------------*/
unsigned short int APP_u16_tGetPowerOfNumber( float Copy_f32_tNumber)
/*---------------------------------------------------------------------------------------*/

{

	unsigned long int  Local_u32_tIteratorI;
	for(Local_u32_tIteratorI=1;(float) (Local_u32_tIteratorI)<Copy_f32_tNumber/2;Local_u32_tIteratorI++)
	{
		if(Copy_f32_tNumber == (float) (Local_u32_tIteratorI*Local_u32_tIteratorI))
		{
			return 1;
		}
		else if(Copy_f32_tNumber == (float) (Local_u32_tIteratorI*Local_u32_tIteratorI*Local_u32_tIteratorI))
		{
			return 0;
		}
	}

	return -1;

}
