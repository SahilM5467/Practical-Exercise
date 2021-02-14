#include<stdio.h>
#include<conio.h>
void main()
{
	int marks;
	clrscr();
	printf("Enter marks\n");
	scanf("%d",&marks);
	if(marks>80)
	{
		printf("Destination");
	}
	else if(marks>60)
	{
		printf("First Class");
	}
	else if(marks>40)
	{
		printf("Second Class");
	}
	else
	{
		printf("Fail");
	}
	getch();
}