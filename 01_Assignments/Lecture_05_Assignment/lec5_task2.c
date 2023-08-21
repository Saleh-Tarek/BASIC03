/*
==========================================================================================
Diploma		:	BASIC03 - Eng. Amgad Samir
Target		: 	C Functions
Name		:	Assignment five - Lecture five - Problem number two
Program		:	Very simple calculator
Author		:	Tarek Saleh
==========================================================================================
Description	:	(2) Write a C Function that returns the addition or subtraction
				or multiplication or division for two numbers.
				The function should take the required operation and two numbers
				as arguments. It also should check that the input operation is 
				one of those operation that mentioned before and if not it should
				return error. The function should be implemented using switch case.
+
==========================================================================================
*/

/*-------------------------                                      ------------------------*/
/*---------------------------------------------------------------------------------------*/

#include <stdio.h>
#define ZERO_VALUE         	0
#define TRUE_VLAUE         	1
#define	ERROR_VALUE		 	-1 



/*-------------------------          Function Declaration         -----------------------*/
float APP_f16_tCalculateNum(float Copy_s32_tFirstNum,float Copy_s32_tSecondNum, unsigned char Copy_u8_tOperation);
/*---------------------------------------------------------------------------------------*/


int main()
{
   float Local_f32_tFirstNum, Local_f32_tSecondNum, Local_f32_tResult;
   unsigned char Local_u8_tOperation, Local_u8_tCheckNum = TRUE_VLAUE;

/*-------------------------          Display Instructions         -----------------------*/

    printf("\nPlease follow the instructions below to perform calculations:\n");
    printf("1. Enter the first number and ensure it's not a character and press enter.\n");
    printf("2. Enter the operator (+, -, *, /) and press Enter.\n");
    printf("3. Enter the second number and ensure it's not a character and press enter.\n");
    printf("4. The result of the calculation will be displayed.\n");
    printf("5. To try another operation, enter any number and press Enter.\n");
    printf("6. To exit the calculator, enter 0 and press Enter.\n\n");

	while (Local_u8_tCheckNum == TRUE_VLAUE)
	{

    printf("Please enter the first number: \n");
    if (scanf("%f", &Local_f32_tFirstNum) != TRUE_VLAUE) 
      	{ 

            printf("Error: Invalid input for the first number!\n");
            return (ERROR_VALUE);
   		}
    
    printf("Please enter the operator : \n");
    fflush(stdin);
    scanf("%c",&Local_u8_tOperation);

    printf("please enter the second number : \n");
    if (scanf("%f", &Local_f32_tSecondNum) != TRUE_VLAUE)
    {
        printf("Error: Invalid input for the second number!\n");
        return (ERROR_VALUE);
   	}

/*-------------------------             Function Call             -----------------------*/

    Local_f32_tResult = APP_f16_tCalculateNum(Local_f32_tFirstNum, Local_f32_tSecondNum, Local_u8_tOperation);

/*-------------------------              Error Check             -----------------------*/
    if (Local_f32_tResult == ERROR_VALUE)
    {
    	printf("Error: Invalid input!\n");
    }
    else
    {
    	printf("%.2f %c %.2f = %.2f\n",Local_f32_tFirstNum , Local_u8_tOperation , Local_f32_tSecondNum ,Local_f32_tResult);

    }

    printf("\nTo try again enter any number :\nto Exit enter 0 : \n");
    scanf(" %hhu",&Local_u8_tCheckNum);
   	}
	return (ZERO_VALUE);
}
/*-------------------------          Function Definition         -----------------------*/
float APP_f16_tCalculateNum(float Copy_s32_tFirstNum,float Copy_s32_tSecondNum, unsigned char Copy_u8_tOperation)
/*---------------------------------------------------------------------------------------*/
{

    if (Copy_s32_tSecondNum ==0)
    {
    	printf("Error: Division by zero is not allowed!\n");
    	return ERROR_VALUE;
    }
switch(Copy_u8_tOperation)
  	{
    	case '+': 
      		return (Copy_s32_tFirstNum + Copy_s32_tSecondNum); 
      	case '-': 
      		return (Copy_s32_tFirstNum - Copy_s32_tSecondNum);
      	case '*': 
      		return (Copy_s32_tFirstNum * Copy_s32_tSecondNum);
      	case '/': 
      		if(Copy_s32_tSecondNum == ZERO_VALUE)
      		{
   				printf("Error: Division by zero is not allowed!\n");
   				return ERROR_VALUE;
      		}
      		return (Copy_s32_tFirstNum / Copy_s32_tSecondNum);
      	default :
            // Invalid operator is an error
      		printf("Error: Invalid operator!\n");
      		return ERROR_VALUE;
  	}
}
