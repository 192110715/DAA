#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
	printf("enter the number of columns:");
	scanf("%d",&c);
	printf("enter the number of rows:");
	scanf("%d",&r);
	printf("enter the first element matrix:");
	for(i=0;i<=c;i++)
	{
		for(j=0;j<=c;j++)
		{
			scanf("%d",&a[10][10]);
		}
	}
	printf("enter the second element matrix:");
	for(i=0;i<=c;i++)
	{
	for(j=0;j<=c;j++)
	{
	    scanf("%d",&b[10][10]);
	}
}
printf("enter the mul matrix:");
for(i=0;i<=c;i++)
{
for(j=0;j<=c;j++)
{
for(k=0;k<=c;k++)
{
	mul[i][j]=a[10][10]*b[10][10];
	printf("%d",&mul);
}
printf("\n");
}
   return 0;
}
}
