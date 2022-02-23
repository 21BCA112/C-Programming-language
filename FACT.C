#include<stdio.h>
#include<conio.h>
void main()
{
	int i,fact=1,n;
	clrscr();
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf(" factorial %d is : %d",fact,n);
	getch();
}
