
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n=1,inp;
	clrscr();
	printf("Enter the number:");
	scanf("\n %d",&inp);
	for(i=inp;i>=n;--i)
	{
		if(i%2!=0)
		printf("\n %d it is odd",i);
	}
	getch();
}
