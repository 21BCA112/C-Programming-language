/* demo of 2D array */

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j;
	clrscr();
	// logic : Input value into 2d array
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter value for a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	// logic print 2d array
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			//printf("\n a[%d][%d]=%d",i,j,a[i][j]);
			printf("\t%d",a[i][j]);
		}

		printf("\n");
	}
	getch();
}
