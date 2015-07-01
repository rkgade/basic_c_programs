#include<stdio.h>
main()
{
int i,j=0;
for(i=1;i<=5;i++)
{
j=i;
 while((5-j)>0){
   printf("#");
   j++;
}
j=i;
 while(j>0){
   printf("*");
   j--;
}
printf("\n");

}
}
