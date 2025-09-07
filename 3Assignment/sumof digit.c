//find sum first and last digit given no n = 12345,output = 6(1+5)
#include<stdio.h>
int main()
{
	int n,r,sum=0;
	printf("Enter The Number:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
		
	}
	printf("Sum of Digits:%d",sum);
}