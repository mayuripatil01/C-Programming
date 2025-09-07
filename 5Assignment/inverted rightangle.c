// invert right angle triangel
#include <stdio.h>
void main()
{

int row ,column,number;
printf("Enter The size of Inverted Right Triangle :");
scanf("%d",&number);
  
  for (row = 1; row<=number;row++)
  {
  	for (column = number;column>=row; column--)
  	{
  	printf(" * ");	
	}
	printf("\n");
  }

}