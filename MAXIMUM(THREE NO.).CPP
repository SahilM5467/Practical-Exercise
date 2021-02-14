#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b, c;
	clrscr();
	printf("Enter a, b, c:");
	scanf("%d%d%d",&a,&b,&c);
	if ((a>b) && (a>c))
	{
		printf("a is max");
	}
	else if ((b>a) && (b>c))
	{
		printf("b is max");
	}
	else
	{
		printf("c is max");
	}
	getch();
}