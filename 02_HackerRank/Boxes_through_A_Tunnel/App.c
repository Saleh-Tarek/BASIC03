#include <stdio.h>
#include <stdlib.h>
/* Object-like macro*/
#define MAX_HEIGHT 41
/* Struct Declaration */
struct box
{
	int length;
	int width;
	int height;
};
typedef struct box Mybox;

int get_volume(Mybox b);
int is_lower_than_max_height(Mybox b);

int main()
{
	int n,i;
	printf("Enter the number of boxes.\n");
	scanf("%d",&n);
	//int arr[10];
	//Mybox boxex[n];
	Mybox * boxex = (Mybox *) malloc(n * sizeof(Mybox));
	for(i=0;i<n;i++)
	{
		printf("Enter the length, width, and height of box number: %d.\n",i);
		scanf("%d%d%d",&boxex[i].length,&(boxex+i)->width,&boxex[i].height);
	}
	for(i=0;i<n;i++)
	{

		if(is_lower_than_max_height(boxex[i]))
		{
			printf("Box number %d's volume is: %d\n",i,get_volume(boxex[i]));
		}
		else
		{
			/**
			 * Do nothing.
			 * */
		}

	}
	
	return 0;
}

int get_volume(Mybox b)
{
	return (b.length*b.width*b.height);
}
int is_lower_than_max_height(Mybox b)
{
	return (b.height < MAX_HEIGHT? 1:0);	

}

