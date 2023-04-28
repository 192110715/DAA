#include<stdio.h>
int main()
{
	int temp,sum=0,r,n;
	printf("enter the number");
	scanf("%d,",&n);
	temp=n;
	while(n>0)
	{
	r=n%10;
	sum=sum+(r*r*r);
	n=n/10;
}
if(temp==sum)
printf("armstrong number");
else
printf("not armstrong number");
}