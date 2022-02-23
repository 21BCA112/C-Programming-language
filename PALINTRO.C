#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,inp;
	clrscr();
	scanf("%d",&inp);
	while(inp>0)
	{
		a=(inp%10);
		printf("%d",a);
		b=b+a;
		inp=inp/10
