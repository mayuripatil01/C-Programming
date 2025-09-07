//print solid square pattern
#include<stdio.h>
int main()
{
	int size;
	int i,j;
	printf("Enter size of square:");
	scanf("%d",&size);
	
	
	//solid square
	for(i=1;i<=size;i++)
	{
		printf("\n");
		for(j=1;j<size;j++)
		printf(" * ");
		
	}
	printf("\n");
	



//hollw square 
	for(i=1;i<=size;i++)
{
	printf("\n");
	
			for(j=1;j<=size;j++)
	
		if(i==1||j==1||j == size||i == size)
    printf(" * ");
      else
    printf("  ");

}
return 0;
}
