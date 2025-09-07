//Reverge the given array
#include <stdio.h>
int main()
{
	int arr[5] = {1,2,3,4,5};
	int i,temp;
	
	for(i=0;i<5/2;i++)
	{
		temp = arr[i];
		arr[i] =arr[4-i];
		arr[4-i]= temp;
		
	}
	printf("Reverse Array :");
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}