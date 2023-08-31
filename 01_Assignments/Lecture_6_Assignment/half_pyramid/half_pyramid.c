/*
* In this c program, a half pyramid pattern is designed and implemented using both
* condition statement - If statement, and 
* loops - for loop.
*
*/

#include<stdio.h>

int main()

{
	int row, i, j;
	
	printf("Please enter the rows number\n");
	if(scanf("%d",&row)!=1)
	{
		printf("Error, invalid input\n");
		return 0;
	}
	else
	{
		printf("The entered rows value is %d\n",row);
		if(row<=0)
		{
			printf("Error, invalid input\n");
			return 0;
		}
		
		else
		{
			for(i=1; i<=row;i++)
			{
				for(j=1; j<=i;j++)
				{
					/* 
					* If it is required to print the row number then print i which indicates 					* to the row number.
					* It it's required to print a shape such as *, then print '*'.
					*/
					printf("%d",i); 
					/*
					* printf("*");
					*/	
				} /* * The end of the first loop*/
				
			/* 
			* Print a new line.
 			*/
			printf("\n");
                        }/* * The end of the second loop*/
		} /* * The end of the second else block.*/

	} /* * The end of the first else block. */
	return 0;
} /* * The end of the program. */

