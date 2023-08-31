/*
* In this program, a full pyramid pattern is designed,
* using the condition statement and loop.
* It's requires three different for loops,
* The first loop to creat the pyramid row,
* the second to print spaces,
* and the third to print the row number or a shape '*'.
*/

/*
* Auther: Saleh
*/

#include <stdio.h>
int main (void)
{
	int rows, i,j,k;
	printf("Please, enter the pyramid rows number.\n");
	if(scanf("%d",&rows)!=1)
	{
		printf("Error, you have entered an invalid input.\n");
		return (0);
	}
	else
	{
		if(rows<=0)
		{
			printf("Error, zero is an invalid input.\n");
        	        return (0);
		}
		else
		{
			/* * Where the program is written. */
		
			for(i=1;i<=rows;i++)
			{
				for(j=1;j<=rows-i;j++)
				{
					printf(" ");
				}
				for(k=1;k<(2*i);k++)
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



