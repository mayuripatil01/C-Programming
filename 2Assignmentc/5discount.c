//5 Discount Calculation
#include <stdio.h>
int main()
{
	float price, discount=0.0;
	char student;
	
	printf("Enter Price :");
	scanf("%f",& price);
	
	printf("Are You Student yes or not  :");
	scanf("%c",&student);
	
	if (student =='y'|| student =='X')
	{
		if(price>500)
		discount = price * 0.20;
		else
		discount= price *0. 10;
		
	}
	else
	{
		if(price>600)
		discount = price *0. 15;
		else
		discount =0. 0;
	}
	printf("Discount=%.2f \n",&discount);
	printf("Final price = %.2f \n",price - discount);
}
	
	
