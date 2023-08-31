/*
* In the program, it's required to design a c program
* that prints an inverted half pyramid.
* The user will enter the rows number, then in each row, the program
* prints (the entered value - the row number)
*/
/*
* Author: Saleh
*/

#include <stdio.h>
int main ()
{
	int rows, i, j;
	printf("Please, enter the rows number.\n");
	if(scanf("%d",&rows)!=1)
	{
		printf("Error, invalid input.\n");
		return 0;
	}
	else
	{
		printf("Entered rows value is %d\n",rows);
		if(rows<=0)
		{
			printf("Error, invalid input.\n");
			return (0);
		}
		else
		{
			/*
			* Where the program is. 
			*/
			
			for(i=rows;i>=1;i--)
			{
				for(j=1;j<=i;j++)
				{
					/* * printf("%d",i); */
					printf("*");
				}
				/* * printing a new line. */
				printf("\n");
			}
		}
	}
	return (0);
}

