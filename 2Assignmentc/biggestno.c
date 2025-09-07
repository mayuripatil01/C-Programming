// find the greatest 3 no using nested loop
#include<stdio.h>
int main()
{
	int a, b, c,big;
	
	printf("Enter The 3 Number\n");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b)
	{
	
	printf("%d id Biggest \n",a);
    }
    else 
    {
    	if(b>c)
    	{
    		printf("%d is Biggest \n",b);
    	}
		else
		{
			printf("%d is Biggest\n",c);
    	}
    	return 0;
	}

	
}