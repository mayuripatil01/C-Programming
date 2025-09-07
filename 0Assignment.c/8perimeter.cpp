//length & width of rectangle & find perimeter
//formula = perimeter=2*(length+breadth)
#include<stdio.h>
int main()
{
	float length,width,perimeter;
	printf("Enter length of rectangle\n");
	scanf("%f",&length);
	
	printf("Enter width of rectangle\n");
	scanf("%f",&width);
	perimeter = 2*(length*width);
	printf("perimeter of rectangle is%f\n",perimeter);
}
