/* write a program to find even number
author:Patel Keyur C
date:28-dec-2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("\n Enter the number:");
	scanf("\n %d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		printf("\n%d is even number",i);
	}
	getch();
}

