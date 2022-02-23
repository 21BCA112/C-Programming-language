#include<stdio.h>
#include<conio.h>
void main()
{
	int selling_price,cost_price,profit,loss;
	clrscr();
	printf("\nEnter the selling price:");
	scanf("\n %d",&selling_price);
	printf("\nEnetr the cost price:");
	scanf("\n %d",&cost_price);
	profit=selling_price-cost_price;
	if (selling_price>=cost_price)
	{
		printf("profit=%d",selling_price-cost_price);
	}
	else
	{
		printf("loss=%d",cost_price-selling_price);
	}
	getch();
}