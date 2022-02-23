/* write a program to get sum each digit of entered number
author: Patel Keyur
date:30-12-2020
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b=0,inp;
	clrscr();
	scanf("\n%d",&inp);
	while(inp>0)
	{
		a=(inp%10);
		printf("\n%d",a);
		b=b+a;
		inp=inp/10;
	}
	printf("\n%d",b);
	getch();
}


