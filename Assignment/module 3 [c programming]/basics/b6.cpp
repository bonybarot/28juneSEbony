#include<stdio.h>
int main()
{
	int c,i;
	printf("to find the simple interest\n");
	printf("enter the capital:");
	scanf("%d",&c);
	printf("enter interest rate:");
	scanf("%d",&i);
	printf("the interest of capital %d with rate of %d is %d",c,i,c*i/100);
}
