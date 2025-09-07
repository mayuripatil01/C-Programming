//sum of no . find sum of no from start to end
#include<stdio.h>
int main()
{
	int n,i,Sum=0;
	printf("Enter Number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		Sum=Sum+i;
		
	}
	printf("Sum of N Number: %d",Sum);
	
	
	
}