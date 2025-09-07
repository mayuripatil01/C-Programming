// search givrn no in array
#include<stdio.h>
int main()
{
	int i,search,flag = -1;
	int a[5]={10 ,20, 30, 40, 50 };
	printf("Enter the number to search:");
	scanf("%d",& search);
	for(i=0;i<5;i++)
	{
		if(a[i] == search)
		{
			
		
		flag = i;
		break;
		
	    }
	}
	    if (flag != -1)
		{
	    	printf("\n %d found at this position :" , search);
	    	printf("\n %d",i+1);
		}
		else
		{
			printf("\n %d not found",search);
		}
	
	return 0;
}