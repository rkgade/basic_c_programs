#include<stdio.h>
main()
{
int i,j,space_count, no_of_spaces=4;

for( i =1 ; i <=5;i++)
{
	for( space_count=1;space_count<=no_of_spaces;space_count++)
	{
	 printf(" ");
	}

	for(j=1;j<=i;j++)
	{
	 printf("*");
	}
	printf("\n");
	no_of_spaces--;
}
}
