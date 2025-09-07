//program inpute 5 no & find their average
#include<stdio.h>
int main()
{
	float a,b,c,d,e;
	printf("Enter five number :");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	float avg = (a+b+c+d+e)/5;
	printf("The average of five numbers is :%2f",avg);
	return 0;
	
	
	
}
