/*wap to enter to 3x3 matrix and the print*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],m2[3][3],m3[3][3],i,j;
	clrscr();
	//logic: input value into 2d array
	for(i=0;i<3;i++)  //row
	{
		for(j=0;j<3;j++) //column
		{
			printf("\n Enter Values m1[%d][%d] :",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
		for(i=0;i<3;i++)  //row
		{

			for(j=0;j<3;j++) //column
			{
				printf("\n Enter Values m2[%d][%d] :",i,j);
				scanf("%d",&m2[i][j]);
			}
		}
		//logic: print 2d array
		for(i=0;i<3;i++)
		{
			for(j=0;j,3;j++)
			{
				printf("%d\t ",m1[i][j]);
			}
			printf("\n");
		}

		getch();
}