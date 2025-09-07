//Find minimum maximum no in array ( a[size]= 10 20 30 40)
#include<stdio.h>
int main()
{int a[10],size,i,max;
printf("Enter Size of array:");
scanf("%d",&size);
for (i=0;i<size;i++)
{
	scanf("%d",&a[i]);
	
}
max=a[0];
for(i=0;i<size;i++)
{
	if(a[i]>max)
	{
		max=a[i];
	}
}
printf("Maximum value of array:%d",max);
return 0;

	
}




/*
int main()
{int a[10],size,i,min;
printf("Enter Size of array:");
scanf("%d",&size);
for (i=0;i<size;i++)
{
	scanf("%d",&a[i]);
	
}
min=a[0];
for(i=0;i>size;i++)
{
	if(a[i]>min)
	{
    	min=a[i];
	}
}
printf("Minimum value of array:%d",min);
return 0;

	
}*/