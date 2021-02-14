#include<stdio.h>
#include<conio.h>
void main()
{
	int n, i;
	clrscr();
	unsigned long long fact=1;
	printf("Enter an integer:");
	scanf("%d",&n);
	if (n<0)
	{
		printf("Error! Factorial of a negative number does not exist");
	}
	else
	{
		for (i=1;i<=n;++i)
		{
			fact*=i;
		}
		printf("Factorial of %d=%llu",n,fact);
	}
	getch();
}