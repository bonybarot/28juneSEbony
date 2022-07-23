#include<stdio.h>
int main ()
{
	int a;
	printf("enter a number:");
	scanf("%d",&a);
	if(a<=0){
	if(a==0)
	printf("you have etntered zero");
	else
	printf("you have entered negative number");
	}
	else{
	printf("you have entered positive number");
	}
}
