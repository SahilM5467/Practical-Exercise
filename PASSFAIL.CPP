#include<stdio.h>
#include<conio.h>
void main()
{
	int marks;
	clrscr();
	printf("Enter your marks:");
	scanf("%d",&marks);
	if (marks>=32)
	{
		printf("You are pass");
	}
	else
	{
		printf("You are fail");
	}
	getch();
}