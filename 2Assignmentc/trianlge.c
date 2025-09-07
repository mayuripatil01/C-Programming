// accept 3 side of triangle from user and detremine triangle is equalateral,isosceles,or scalene1
#include<stdio.h>
#include<conio.h>
int main()
{
	int side1,side2,side3;
	printf("Enter The Value of 1st side:");
	scanf("%d",&side1);
	
	printf("Enter The Value of 2nd side:");
	scanf("%d",&side2);
	
	printf("Enter The Value of 3rd side:");
	scanf("%d",&side3);
	
	if (side1=side2&&side2==side3)
	{
		printf("\n\n triangle is Equailateral");
	}
	else if (side1==side2||side2==side3||side3==side1)
	{
			printf("\n\n triangle is Isosceles");
	}
	else
	{
			printf("\n\n triangle is Scalene");
	}
}