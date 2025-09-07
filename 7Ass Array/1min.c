// Find  Minimum  Number in Array

#include<stdio.h>
int main()
{
	int a[5],size,i,min;
	printf("Enter size of Array :");
	scanf("%d",& size);
	printf("Enter Value of Array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		
	}
	min=a[0];
	for(i=0;i<size;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			
		}
		
	}
	printf("minimum Value of Array:%d ", min);
	
}