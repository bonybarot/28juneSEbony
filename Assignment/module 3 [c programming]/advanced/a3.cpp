#include<stdio.h>
int main()
{
	int n;
	printf("enter number of numbers to sort:: ");
	scanf("%d",&n);
	int a[n],i,j=0,temp;
	for(i=0;i<n;i++)
	{
		printf("enter numbers to sort %d ::",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n+1;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
