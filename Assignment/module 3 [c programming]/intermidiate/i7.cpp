#include<stdio.h>
int main()
{
	int number1,number2,choice2,choice;
	printf("Press 1 for addition\n");
	printf("Press 2 for subtraction\n");
	printf("Press 3 for Multiplication\n");
	printf("Press 4 for Division\n");
	do{
	printf("Enter your choice :: ");
	scanf("%d",&choice);
	if(choice>4 || choice<1)
	{
		printf("invalid input\n please enter number between 1 to 4");
	}
	else
	{
	printf("Enter number 1 :: ");
	scanf("%d",&number1);
	printf("Enter number 2 :: ");
	scanf("%d",&number2);
	}
	switch(choice)
{
	case 1 :
	printf("Addition of %d and %d is%d\n",number1,number2,number1+number2);
	break;
	case 2 :
	printf("Subtraction of %d and %d is%d\n",number1,number2,number1-number2);
	break;
	case 3 :
	printf("Multiplication of %d and %d is%d\n",number1,number2,number1*number2);
	break;
	case 4 :
	printf("Division of %d and %d is %d\n",number1,number2,number1/number2);
	break;
}
	printf("\nDo you want to perform any other operation\n");
	printf("Press 1 for yes\n");
	printf("Press 2 for no\n");
	scanf("%d",&choice2);
}
	while(choice2==1);
}
