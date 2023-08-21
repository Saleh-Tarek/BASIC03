/*
==========================================================================================
Diploma		:	BASIC03 - Eng. Amgad Samir
Target		: 	C Functions
Name		   :	Assignment five - Lecture five - Problem number one
Program		:	Find the cube value of any number
Author      :  Tarek Saleh
==========================================================================================
Description	:	(1) Write a C Function that prints the cube of any number.
+
==========================================================================================
*/

/*-------------------------                                      ------------------------*/
/*---------------------------------------------------------------------------------------*/

#include <stdio.h>
#define ZERO_VALUE 0

/*---------------------------------------------------------------------------------------*/
signed long int APP_s32_tGetCubeNum(signed long int Copy_s32_tNum);
/*---------------------------------------------------------------------------------------*/


int main()
{
   signed long int Local_s32_tNumber, Local_s32_tResult ;
   printf("\nPlease enter base number: \n");
   if(scanf("%li",&Local_s32_tNumber)==1)
   {
      Local_s32_tResult = APP_s32_tGetCubeNum(Local_s32_tNumber);
      printf("The cube of %li is %ld\n",Local_s32_tNumber,Local_s32_tResult);
   }
   else
   {
      printf("\n Error, please enter an integer number next time to move forward.\n");      
   }   
return (ZERO_VALUE);
}
/*---------------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------------*/


signed long int APP_s32_tGetCubeNum(signed long int Copy_s32_tNum)
{
   return (Copy_s32_tNum*Copy_s32_tNum*Copy_s32_tNum);
}
/*---------------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------------*/
