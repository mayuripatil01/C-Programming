//search given no in array 
#include<stdio.h>
int main()
{
	int i,search,flag =-1;
	int a[10]={50,40,80,90,75,56,43,17};
	printf("Enter a Number to search:");
	scanf("%d",&search);
	for(i=0;i<10;i++)
	{
		if (a[i]==search)
    {
	flag=i;
	break;
	
	}
		}
	if (flag!=-1)
	{
		printf("\n%d found at position:",search);
		printf("\n%d ",i+1);
		
	}
	else{
		printf("\n%d not found",search);
	}
	return 0;
}