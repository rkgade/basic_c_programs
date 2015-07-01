#include<stdio.h>
main()
{

int i,n,k,space;
printf("Number of lines: ");
scanf("%d",&n);
space= n-1;

for(k=1;k<=n;k++)
{
	for(i=1;i<=space;i++)
	{
		printf(" ");
	}
	space--;
	for(i=1;i<=2*k-1;i++)
	{
		printf("*");
	}
	printf("\n");

}

space=1;
for(k=1;k<=n;k++)
{
	for(i=1;i<=space;i++)
        {
                printf(" ");
        }
        space++;
        for(i=1;i<=2*(n-k)-1;i++)
        {
                printf("*");
        }
        printf("\n");

}


}
