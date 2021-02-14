#include<stdio.h>
#include<conio.h>
void main()
{
	float basic, da, hra, ma=300, pf, gross, nt;
	clrscr();
	printf("\n Enter basic salary of the emloyee:");
	scanf("%f",&basic);
	da=(0.1)*basic;
	hra=(7.5/100)*basic;
	pf=(12.50/100)*basic;
	gross=basic+da+hra+ma;
	nt=gross-pf;
	printf("\nDA=%.2f \nHRA=%.2f \nMA=300 \nProffetional Tax=%.2f \nGross=%.2f \nNet Salary=%.2f",da,hra,pf,gross,nt);
	getch();
}