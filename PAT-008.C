#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a;
	clrscr();
	for(i=1;i<=8;i++)
	{
		for(j=1;j<=i;j++)
		{
			if((i+j)<=8)
				printf("*");

			else
				printf(" ");
		}
			for(a=0;a<=i;a++)
			{
			printf("*");
			}
			printf("\n");
	}
	getch();

}

