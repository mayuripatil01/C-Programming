//8 strong no or not
#include <stdio.h>
int main()
{
	int num, temp,rem,count, fact,sum=0;
	
	printf("Enter a Number\n");
	scanf("%d",&num);
	
	temp= (num);
	while(num)
	{
		rem= num%10;
		count= 1;
		fact=1;
		while(count<=rem)
		{
			fact= fact*count;
			count++;
		}
		
			printf("Factorial of %d is %d\n",rem,fact);
			sum = sum+fact;
			num= num/10;
		
	}
	if (temp==sum)
	{
		printf("%d is strong no\n",temp);
		
	}
	else{
		printf("%is Not strong no\n", temp);
	}
	return 0;
}
