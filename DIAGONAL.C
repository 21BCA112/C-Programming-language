#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],i,j,st=0;
	clrscr();
	printf("Enter the values :");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter Values m1[%d][%d] :",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		     printf("%d\t ",m1[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j && m1[i][j]>0)
				st+=1;
			else if(i!=j && m1[i][j]==0)
				st+=1;
			else
				st=0;
		}
	}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("it is d:");
			else
				printf("it is not d:");
			}
		}
		getch();
}