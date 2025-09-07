//7 find factorial no n=5, 120
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,f=1;
	printf("Enter Any Number:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("Fctorial of %d is %d ",n);
}
