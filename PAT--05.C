#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a;
	clrscr();
	for(i=0;i<=5;i++)
	{
		for(j=4;j>=i;j--)
		{
			printf(" ");
		}
		for(a=0;a<=i;a++)
		{
			textcolor(WHITE+RED);
			cprintf("*");
		}
		printf("\n");
	}
	getch();
}