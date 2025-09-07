//base & height of a triangle & calculate area of triangle
#include<stdio.h>
int main()
{
	float base,height,area;
	printf("Enter length of triangle\n");
	scanf("%f",&base);
	
	printf("Enter height of triangle\n");
	scanf("%f",&height);
	 area=(base*height)/2.0;
	 printf("Area of triangle is %f 0.2 f\n",area);
	 
	 return 0 ;
	 
}