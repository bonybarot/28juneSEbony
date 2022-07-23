#include<stdio.h>
int main()
{
	int a1[5],i;
	for(i=0;i<5;i++){
		printf("enter the number");
		scanf("%d",&a1[i]);
	}
	for(i=0;i<5;i++){
		printf("a1[%d] = %d\n",i,a1[i]);
	}
}
