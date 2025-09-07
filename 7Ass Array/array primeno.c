// accept array and print only prime number of array
#include<stdio.h>
#include<stdio.h>
int main()
{
	int a[10],i,j,f,n;
	printf("Enter Elements:\n");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		n=a[i];
		f=0;
		for(j=2;j<n;j++)
		{
			if(n%j==0)
			{
				f=1;
				break;
			}
		}
		if (f==0)
		printf("%d is prime \n",n);
		
	}
	return 0;
}