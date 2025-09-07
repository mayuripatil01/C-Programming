//Age Classification

#include <stdio.h>
int main()
{
	 int age;
	printf("Enter Age :");
	scanf("%d",&age);
	
	if(age<12)
	printf("Childern\n");
	else if (age>=12 && age<=19)
	printf("Teenager\n");
	else if (age>=20 && age<=59)
	printf("Adult \n");
	else
	printf("Senior \n"); 
	
	return 0;
}