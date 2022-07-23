#include<stdio.h>
int main()
{
	int c;
	printf("to convert degree celsius into fahrenheit\n");
	printf("enter the value of celsius:");
	scanf("%d",&c);
	printf("the fahrenheit value for celsius %d is %0.2f",c,c*1.8+32);
}
