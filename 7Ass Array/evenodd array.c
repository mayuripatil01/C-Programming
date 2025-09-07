// find even and oddd number in array
#include<stdio.h>
int main()
{
	int a[8],even=0,odd=0,i;
	for(i=0;i<8;i++)
	{
		printf("Enter The Number:");
		scanf("%d",&a[i]);
		
	}
	printf("array elements are:");
	for (i=0;i<8;i++)
	{
		if(a[i]%2==0)
		even++;
		else
		odd++;
		
	}
	printf("\n Total even=%d and odd=%d",even,odd);
	return 0;
}