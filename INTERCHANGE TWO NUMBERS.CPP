#include<stdio.h>
#include<conio.h>
void main()
{
	double first,second,temp;
	clrscr();
	printf("Enter first number:");
	scanf("%lf",&first);
	printf("Enter second number:");
	scanf("%lf",&second);

	temp=first;
	first=second;
	second=temp;
	printf("\n After swapping,first number=%2lf \n",first);
	printf("After swapping, second number=%2lf",second);
	getch();

}