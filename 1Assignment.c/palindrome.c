//given  3 digit number is palindrome or not
#include<stdio.h>
int main()
{
	int n,c,s=0,r;
	printf("Enter Any Number:");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		r= n%10;
		s=r+(s*10);
		n=n/10;
		
	}
	if(c==s)
	printf("Palindrome Number");
	else
	printf("Not Palindrome");
	return 0;
	
}