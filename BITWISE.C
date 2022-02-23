#include<stdio.h>
#include<conio.h>
void main()
{
	int a=7,b=5;
	clrscr();
	printf("\n%d",(a&b));
	printf("\n%d",(a|b));
	printf("\n%d",(a^b));
	printf("\n%d",(a<<b));
	printf("\nd%d",(a>>b));
	getch();
}