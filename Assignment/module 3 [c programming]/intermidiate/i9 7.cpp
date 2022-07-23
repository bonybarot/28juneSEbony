#include<stdio.h>  
 int main()    
{    
	int n, reverse=0, mod;    
	printf("Enter a number: ");    
  	scanf("%d", &n);    
  	while(n!=0)
	{    
    	mod=n%10;    
    	reverse=reverse*10+mod;
    	n=n/10;
	}    
		printf("Reversed Number: %d",reverse);  
}   
