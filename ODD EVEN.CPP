#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter any number:");
	scanf("%d",&a);

	if ((a%10)%2==0)
	{
		printf("Given number is even");
	}
	else
	{
		printf("Given number is odd");
	}

	getch();
}