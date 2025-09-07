// Merge two array 
# include<stdio.h>
int main()
{
	int a[4]={1,2,3,4,};
	int b[3]={5,6,7};
	int c[7], i,j;
	
	//copy array a 
	for(i=0;i<4;i++)
	c[i] = a[i];
	
	//copy array b
	for(j=0; j<3;j++)
	c[i+j] = b[j];
	
	printf("Merge array :");
	for(i=0;i<7;i++)
	printf("%d",c[i]);
	return 0;
}
