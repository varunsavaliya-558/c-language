#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,x;
	clrscr();
	printf("please enter the value of A : \n");
	scanf("%i",&a);
	printf("please enter the value of B : \n");
	scanf("%i",&b);

	x=(a*a)-(b*b)-(2*a*b);


	printf("answer = %i",x);
	getch();
}
