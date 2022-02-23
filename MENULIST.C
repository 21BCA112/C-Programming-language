/*write a menu driven program
	1.check the number is even or odd
	2.find minimum number
	3.check enter number is positive or negative
	4.exit
author:Patel Keyur Chiragbhai
date:21-12-21*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int no1,no2,no3,op,choice;
	clrscr();
	printf("select your choice from below list:");
	printf("1 for even or odd number\n");
	printf("2 for minimum number\n");
	printf("3 for positive or negative number\n:");
	printf("4 for exit\n");
	printf("\n\t_____________");

	printf("Enter your choice:\n");
	scanf("%d",&choice);
	printf("Enter number 1:\n");
	scanf("%d",&no1);
	switch(choice)
	{
		case 1:
			op=no1;
			printf("even or odd is %d=%d",no1,op);
			break;
		case 2:
			op=no1;
			printf("minimum number is %d=%d",no1,op);
			break;
		case 3:
			getch();
		default:
			printf("Enter correct choice");
	  }
	  getch();
}



