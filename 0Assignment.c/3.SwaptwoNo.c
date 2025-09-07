// Swap two NO Using Tempory third variable
#include <stdio.h>
int main ()
{
	int x=10, y=20, temp;
	printf("X=%d,Y=%d\n",x,y);
	temp= x;
	x=y;
	y=temp;
	
	printf("after swapping X=%d, Y=%d\n",x,y);
	return 0;
	
	
	
}