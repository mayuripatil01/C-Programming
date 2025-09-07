//6 print perfect number or not
// inpute 6---->1+2+3 = 6
int main()
{
	int n,sum=0,i;
	printf("Enter Any Number:");
	scanf("%d",&n);
	for (i=1;i<n;i++)
	{
	if(n%i==0)
{
	sum=sum+i;
}
	}
	if(sum==n)
	printf("Perfect Number");
	else
	printf("Not Perfect Number");
		
}
