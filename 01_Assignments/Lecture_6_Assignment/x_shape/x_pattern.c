/* size =5
	Num j= 2*size-1-i
	Num j= i
for(i=0; i<size;i++)
{	
	for(j=0;j<size:j++)
	{
		if(j= 2*size-1-i || j=i)
		{
			printf("*"); 
		}
		else
		{
			printf(" ");
		}
	}
	printf("\n");
}
	upper left bottom right

  j= 0123456789	
i=0  *--------*
i=1  -*------*-
i=2  --*----*--
i=3  ---*--*---
i=4  ----**----
i=5  ----**----
i=6  ---*--*---
i=7  --*----*--
i=8  -*------*-
i=9  *--------*
*/


/*
* In this program, a X pattern is designed.
* Number of Rows is entered by the user.
* The row number or '*' is printed at each row twice, at positions controlled by j,
* where, j is equal to i (where i is the row number), or j= number -i +1 (where number is (rows*2 -1)). If j is not equal to these values, print a space.
* This program takes the size of the cross as input from the user and then uses nested loops to print the stars in the pattern of a cross or X-shape.
* The condition i == j corresponds to the top-left to bottom-right diagonal of the cross, 
* and the condition j == size - i + 1 corresponds to the top-right to bottom-left diagonal of the cross. 
* For all other positions, spaces are printed.
*/
/* 
* Auther Saleh
*/





#include <stdio.h>
int main (void)
{
	int rows, i, j, number=0;
	printf("Please, enter the pattern rows number.\n");
	if(scanf("%d",&rows)!=1)
	{
		printf("Error, rows value is not valid.\n");
		return (0);
	}
	else
	{
		if(rows<=0) 
		{
                	printf("Error, zero is not a valid input.\n");
                	return (0);			
		}	
		else 
		{
			printf("The Value entered is (%d).\n",rows);
			if(rows%2==0) /* *Rows value is even.*/
			{
				number = (rows *2);
			}
			else /* *Rows value is odd. */
			{
				number = (rows *2)  -1;
			}
			for(i=1;i<=number;i++)
			{
				for(j=1;j<=number;j++) 
				{
					if(j==i || j==number-i+1)
					{
						/* * printf("%d",i); */
						printf("*"); 
					}
					else
					{
						/* *printing a space*/
						printf(" "); 
					}
				} /* *The end of the first loop. */
				/* *printing a newline.*/
				printf("\n");
			}/* *The end of the second loop. */
		}/* *The end of the second else. */ 
	}/* *The end of the first else. */
	return (0);
} /* *The end of the main function. */
