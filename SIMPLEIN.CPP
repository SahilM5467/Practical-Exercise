#include<stdio.h>
#include<conio.h>
void main()
{
	float si,p,n,r;
	clrscr();
	printf("\n Enter principal amount:");
	scanf("%f",&p);
	printf("\n Enter number of year:");
	scanf("%f",&n);
	printf("\n Enter rate:");
	scanf("%f",&r);
	si=(p*n*r)/100;
	printf("\n Simple Interest=%f",si);
	getch();
}