//convert temperature from celsious to fahrenheit formula
#include<stdio.h>
int main()
{
	float c,fh;
	printf("Enter temperature in centigrade\n");
	scanf("%f",&c);
	
	fh = (c*1.8)+32;
	printf("Temperature in fahreheit is %f\n",fh);
	return 0;
	
	
}