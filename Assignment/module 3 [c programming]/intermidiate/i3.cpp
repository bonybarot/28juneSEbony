#include<stdio.h>
int main()
{
   float num1, num2, num3;

   printf("Enter three numbers to find the largest: ");
   scanf("%f %f %f",&num1,&num2,&num3);

   if(num1 > num2)
   {
     if(num1 > num3)
       printf("Largest Number=%.2f\n",num1);

     else
       printf("Largest Number=%.2f\n",num3);
   }

   else
   {
     if(num2 > num3)
       printf("Largest Number=%.2f\n",num2);

     else
       printf("Largest Number=%.2f\n",num3);
   }

}
