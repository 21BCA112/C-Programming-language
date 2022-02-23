#include<stdio.h>
#include<conio.h>
void main()
{
	int s1,s2,s3,s4,s5,t;
	float per;
	clrscr();
	printf("Enter the marks of s1,s2,s3,s4,s5 : ");
	scanf("\n%d\n%d\n%d\n%d\n%d",&s1,&s2,&s3,&s4,&s5);
	if(s1>35 && s2>35 && s3>35 && s4>35 && s5>35)
	{
		t=s1+s2+s3+s4+s5;
		printf("\n %d",t);
		per=(t/5);
		printf("\n %f",per);
		if(per>=85 && per<=95)
		{
			printf("A+");
		}
		else if(per>=75 && per<=85)
		{
			printf("A");
		}
		else if(per>=65 && per<=75)
		{
			printf("B");
		}
		else if(per>=55 && per<=65)
		{
			printf("C");
		}
		else if(per>=45 && per<=55)
		{
			printf("D");
		}
		else
		{
			printf("fail");
		}

		getch();
	 }
	 else
	 {
		printf("fail");
		getch();
	 }
}
