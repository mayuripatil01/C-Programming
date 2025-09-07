//accept the no from user and operator (+,-,*,/,%) based on perform the desire operation
#include<stdio.h>
#include<conio.h>
int main()
{
	int a= 5,b=4, c;
	printf(" a is %d and b is %d\n",a,b);

	c=a+b;
	printf(" a+b = %d\n",c);
	
	c=a-b;
	printf(" a-b = %d\n",c);
	
	
	c=a*b;
	printf(" a*b = %d\n",c);

	c=a/b;
	printf(" a/b = %d\n",c);
	
	c=a%b;
	printf("Remainder when a divided by b=%d\n",c);
	
}