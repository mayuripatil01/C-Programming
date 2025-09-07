//check person eligiblle for vote or not
#include<stdio.h>
int main()
{
	int age;
	printf("Enter The Age:");
	scanf("%d",&age);
	if(age>=18)
	{
	printf("You Can Eligible For Vote");
	}
	else{
		printf("You are Not Eligible For Vote");
	}
	return 0;
	
		
}