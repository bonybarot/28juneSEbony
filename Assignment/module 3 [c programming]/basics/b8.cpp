#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("to get the result enter your marks out of 100\n");
	printf("sub 1:");
	scanf("%d",&a);
	printf("sub 2:");
	scanf("%d",&b);
	printf("sub 3:");
	scanf("%d",&c);
	printf("sub 4:");
	scanf("%d",&d);
	printf("sub 5:");
	scanf("%d",&e);
	int total=a+b+c+d+e, per=(total*100)/500;
	printf("total marks %d\n",total);
	printf("percentage:%0.2f\n",per);
}
