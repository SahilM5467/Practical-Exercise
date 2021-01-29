#include<stdio.h>
#include<conio.h>
void main()
{
	float f,c;
	clrscr();
	printf("Enter centigrade:");
	scanf("%f",&c);
	f=1.8*c+32;
	printf("\n Fahrenheit=%f",f);
	getch();
}