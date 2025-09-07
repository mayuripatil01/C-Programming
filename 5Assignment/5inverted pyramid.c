//print inverted pyramid pattern
#include<stdio.h>
int main()
{
	int num,i,j,k;
	printf("Enter The Number:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		for(k=1;k<i;k++){
			printf("  ");
		}
	}
	{
		for(j=i;j<=num;j++)
		{
			printf(" *  ");
			
		}
	}
	printf("\n");
}