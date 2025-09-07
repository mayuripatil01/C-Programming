//pyramid pattern
#include<stdio.h>
int main()
{
	int numrows  =0;
	printf("Enter The Number of rows:");
	scanf("%d",&numrows);
	for(int rowno = 1;rowno<= numrows;rowno++)
{
	for(int colno = 1;colno<=rowno;colno++)
	{
		printf("* ");
	}
	printf("\n");
}}