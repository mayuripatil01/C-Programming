// Find  Minimum and Maximum Number in Array

#include<stdio.h>
int main()
{
	int a[5],size,i,max;
	printf("Enter size of Array :");
	scanf("%d",& size);
	printf("Enter Value of Array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		
	}
	max=a[0];
	for(i=0;i<size;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			
		}
		
	}
	printf("Maximum Value of Array:%d ", max);
	
}