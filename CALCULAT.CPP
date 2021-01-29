#include<stdio.h>
#include<conio.h>
void main()
{
	int first, second, add, subtract, multiply;
	float divide;
	clrscr();
	printf("Enter two integers\n");
	scanf("%d%d",&first, &second);
	add=first+second;
	subtract=first-second;
	multiply=first*second;
	divide=first/(float)second;
	printf("Addition=%d\n",add);
	printf("Subtraction=%d\n",subtract);
	printf("Multiplication=%d\n",multiply);
	printf("Divition=%.2f",divide);
	getch();
}