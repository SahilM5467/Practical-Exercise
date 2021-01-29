#include<stdio.h>
#include<conio.h>
void main()
{
	float a,h,b;
	clrscr();
	printf("Enter hieght and base");
	scanf("%f%f",&h,&b);
	a=0.5*h*b;
	printf("\n Area of Triangle=%f",a);
	getch();
}
