//five sub, find the total marks & percentage
#include <stdio.h>
int main()
{
	float phy,chem,bio,math,eng,total,percentage;
	
	printf("Enter the marks of five subject :\n");
	scanf("%f%f%f%f%f",&phy,&chem,&bio,&math,&eng);
	total= phy+chem+bio+math+eng;
	percentage=(total/500)*100;
	 printf("\n The total marks that your secure is %f",total);
	 printf("\n\n The precentage is %f",percentage);
	 return 0 ;
}